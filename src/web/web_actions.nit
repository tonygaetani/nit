# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Nitcorn actions used by the nitweb server.
module web_actions

import web_views
import uml

# Display the tree of all loaded mentities.
class TreeAction
	super ModelAction

	redef fun get(req, res) do
		var model = init_model_view(req)
		var view = new HtmlHomePage(model.to_tree)
		res.send_view(view)
	end
end

# Display the list of mentities matching `namespace`.
class SearchAction
	super ModelAction

	# TODO handle more than full namespaces.
	redef fun get(req, res) do
		var namespace = req.param("namespace")
		var model = init_model_view(req)
		var mentity = find_mentity(model, namespace)
		if mentity == null then
			res.error(404)
			return
		end
		if req.is_json_asked then
			res.json(mentity.to_json)
			return
		end
		var view = new HtmlResultPage(namespace or else "null", [mentity])
		res.send_view(view)
	end
end

# Display a MEntity source code.
class CodeAction
	super ModelAction

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	redef fun get(req, res) do
		var namespace = req.param("namespace")
		var model = init_model_view(req)
		var mentity = find_mentity(model, namespace)
		if mentity == null then
			res.error(404)
			return
		end
		var view = new HtmlSourcePage(modelbuilder, mentity)
		res.send_view(view)
	end
end

# Display the doc of a MEntity.
class DocAction
	super ModelAction

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	redef fun get(req, res) do
		var namespace = req.param("namespace")
		var model = init_model_view(req)
		var mentity = find_mentity(model, namespace)
		if mentity == null then
			res.error(404)
			return
		end
		if req.is_json_asked then
			res.json(mentity.to_json)
			return
		end

		var view = new HtmlDocPage(modelbuilder, mentity)
		res.send_view(view)
	end
end

# Return an UML diagram for `namespace`.
class UMLDiagramAction
	super ModelAction

	# Mainmodule used for hierarchy flattening.
	var mainmodule: MModule

	redef fun get(req, res) do
		var namespace = req.param("namespace")
		var model = init_model_view(req)
		var mentity = find_mentity(model, namespace)
		if mentity == null then
			res.error(404)
			return
		end

		var dot
		if mentity isa MClassDef then mentity = mentity.mclass
		if mentity isa MClass then
			var uml = new UMLModel(model, mainmodule)
			dot = uml.generate_class_uml.write_to_string
		else if mentity isa MModule then
			var uml = new UMLModel(model, mentity)
			dot = uml.generate_package_uml.write_to_string
		else
			res.error(404)
			return
		end
		var view = new HtmlDotPage(dot, mentity.as(not null).html_name)
		res.send_view(view)
	end
end

# Return a random list of MEntities.
class RandomAction
	super ModelAction

	redef fun get(req, res) do
		var n = req.int_arg("n") or else 10
		var k = req.string_arg("k") or else "modules"
		var model = init_model_view(req)
		var mentities: Array[MEntity]
		if k == "modules" then
			mentities = model.mmodules.to_a
		else if k == "classdefs" then
			mentities = model.mclassdefs.to_a
		else
			mentities = model.mpropdefs.to_a
		end
		mentities.shuffle
		mentities = mentities.sub(0, n)
		if req.is_json_asked then
			var json = new JsonArray
			for mentity in mentities do
				json.add mentity.to_json
			end
			res.json(json)
			return
		end
		var view = new HtmlResultPage("random", mentities)
		res.send_view(view)
	end
end
