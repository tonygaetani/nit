# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Main home window
module home_views

import beer_views
import social_views
import user_views

redef class App
	redef fun on_create
	do
		if debug then print "App::on_create"

		# Create the main window
		show_home
		super
	end

	# Show the home/main windows
	fun show_home
	do
		var window = new HomeWindow
		window.refresh
		push_window window
	end

	redef fun on_log_in
	do
		super

		# Send back to the home window when logging in
		if not window isa HomeWindow then pop_window
	end
end

# Social pane with networking features
class HomeWindow
	super Window

	private var layout = new ListLayout(parent=self)

	# Cut-point for the iOS adaptation
	var layout_user = new VerticalLayout(parent=layout)
	private var layout_login = new HorizontalLayout(parent=layout_user)
	private var lbl_login_status = new Label(parent=layout_login, text="Welcome".t, size=1.5)
	private var but_login = new Button(parent=layout_login, text="Login or signup".t)
	private var but_preferences = new Button(parent=layout_login, text="Preferences".t)

	private var layout_beers = new VerticalLayout(parent=layout)
	var layout_beers_title = new HorizontalLayout(parent=layout_beers)
	var title_beers = new SectionTitle(parent=layout_beers_title, text="Beer Menu".t, size=1.5)
	private var beer_button = new Button(parent=layout_beers_title, text="View all".t)
	private var beer_list = new VerticalLayout(parent=layout_beers)
	private var beer_temp_lbl = new Label(parent=beer_list, text="Loading...".t)

	private var layout_social = new VerticalLayout(parent=layout)
	private var social_header = new HorizontalLayout(parent=layout_social)
	private var social_title = new SectionTitle(parent=social_header, text="Friends".t, size=1.5)
	private var social_button = new Button(parent=social_header, text="Manage".t)
	private var social_list = new VerticalLayout(parent=layout_social)
	private var social_temp_lbl = new Label(parent=social_list, text="Loading...".t)

	private var layout_news = new VerticalLayout(parent=layout)
	private var news_header = new HorizontalLayout(parent=layout_news)
	private var news_title = new SectionTitle(parent=news_header, text="Events".t, size=1.5)
	#private var news_button = new Button(parent=news_header, text="Open website") # TODO
	private var news_label = new Label(parent=layout_news, text="Bière en cask le jeudi!")

	init
	do
		for c in [but_login, but_preferences, beer_button, social_button] do
			c.observers.add self
		end
	end

	redef fun on_resume do refresh

	# Refresh content of this page
	fun refresh
	do
		if not app.restored then return

		layout_login.clear
		if app.user != null then
			# Logged in
			lbl_login_status.parent = layout_login
			but_preferences.parent = layout_login
			lbl_login_status.set_welcome
		else
			but_login.parent = layout_login
			but_preferences.parent = layout_login
		end

		# Fill beers
		(new ListDiffAction(self, "rest/since?token={app.token}")).start

		# Fill people
		(new HomeListPeopleAction(self, "rest/friends?token={app.token}")).start

		# Check if token is still valid
		(new CheckTokenAction(self, "rest/check_token?token={app.token}")).start
	end

	redef fun on_event(event)
	do
		if debug then print "BenitluxWindow::on_event {event}"

		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_preferences then
				app.push_window new UserWindow
				return
			else if sender == but_login then
				app.push_window new SignupWindow
				return
			else if sender == beer_button then
				app.push_window new BeersWindow
				return
			else if sender == social_button then
				app.push_window new SocialWindow
				return
			#else if sender == news_button then
				# TODO open browser?
			end
		end

		super
	end
end

# `Label` used in section headers
class SectionTitle super Label end

# Async request to update the beer list on the home screen
class ListDiffAction
	super WindowHttpRequest

	redef type W: HomeWindow

	redef fun on_load(beers)
	do
		window.layout_beers.remove window.beer_list
		window.beer_list = new VerticalLayout(parent=window.layout_beers)

		if intercept_error(beers) then return

		if not beers isa Array[BeerAndRatings] then
			app.feedback "Communication Error".t
			return
		end

		# Sort beers per preference
		var comparator = new BeerComparator
		comparator.sort beers

		var max_beers = 6
		while beers.length > max_beers do beers.pop

		for bar in beers do
			var view = new BeerView(bar, parent=window.beer_list)
		end
	end
end

# Async request to list users
class HomeListPeopleAction
	super WindowHttpRequest

	redef type W: HomeWindow

	redef fun on_load(users)
	do
		window.layout_social.remove window.social_list
		window.social_list = new VerticalLayout(parent=window.layout_social)

		if intercept_error(users) then return

		if users isa Array[UserAndFollowing] then for uaf in users do
			var view = new PeopleView(uaf, true, parent=window.social_list)
		end
	end
end

# Async request to check if `app.token` is still valid
class CheckTokenAction
	super WindowHttpRequest

	redef type W: HomeWindow

	redef fun on_load(res) do intercept_error(res)
end

# Today's date as a `String`
fun today: String
do
	var tm = new Tm.localtime
	return "{tm.year+1900}-{tm.mon+1}-{tm.mday}"
end
