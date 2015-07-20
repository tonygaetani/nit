# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# jwrapper wraps Java classes in extern Nit classes
#
# This tool takes class file, Jar archives and javap files as input,
# and it outputs a Nit source file.
# For further details on installation and usage, refer to the README file.
#
# Here's an overview of the project design :
# * Grammar and lexer : `grammar/javap.sablecc`
# * The `javap_visitor` implements the visitor that extracts data from the AST
# * The `code_generator` takes these data and converts it to Nit code via the `jtype_converter` module and generate the output Nit file.
# * The `model` contains data structures used to represent the data
# * The `jwrapper` module implements the user interface
module jwrapper

import opts
import javap_test_parser
import code_generator
import javap_visitor

var opts = new OptionContext

var opt_unknown = new OptionEnum(["comment", "stub", "ignore"], "How to deal with unknown types", 0, "-u")
var opt_verbose = new OptionCount("Verbosity", "-v")
var opt_output = new OptionString("Output file", "-o")
var opt_help = new OptionBool("Show this help message", "-h", "--help")

opts.add_option(opt_output, opt_unknown, opt_verbose, opt_help)
opts.parse args

if opts.errors.not_empty or opts.rest.is_empty or opt_help.value then
	print """
Usage: jwrapper [options] file [other_file [...]]
Input files: bytecode Java class (.class), Jar archive (.jar) or javap output (.javap)
Options:"""
	opts.usage

	if opt_help.value then exit 0
	exit 1
end

var out_file = opt_output.value
if out_file == null then out_file = "out.nit"

if not "javap".program_is_in_path then
	print "Error: 'javap' must be in PATH"
	exit 1
end

var javap = new ProcessReader("javap", "-public", dot_class)

var p = new TestParser_javap
var tree = p.work(javap.read_all)

var converter = new JavaTypeConverter

var visitor = new JavaVisitor(converter)
visitor.enter_visit(tree)

var generator = new CodeGenerator(out_file, visitor.java_class, opt_attr.value, opt_comment.value)
generator.generate
