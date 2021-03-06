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

module test_nitunit4 is test_suite

import test_nitunit4_base

class TestTestSuite
	super SuperTestSuite

	fun test_foo do
		print "Tested method"
		assert before
		before = false
	end

	fun test_bar do
		print "Tested method"
	end

	fun test_baz do
		print "Tested method"
	end
end
