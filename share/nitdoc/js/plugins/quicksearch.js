/* This file is part of NIT ( http://www.nitlanguage.org ).

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   Documentation generator for the nit language.
   Generate API documentation in HTML format from nit source code.
*/

/*
 * Nitdoc QuickSearch widget
 */
define([
	"jquery",
	"jQueryUI",
	"plugins/utils",
	"quicksearchList",
], function($, ui, utils) {
	$.widget("nitdoc.quicksearch", {

		options: {
			list: {}, // List of raw results generated by nitdoc tool
			fieldNotUsedClass: "nitdoc-qs-field-notused",
			fieldAttrs: {
				autocomplete: "off",
				value: "quick search..."
			},
			tableID: "nitdoc-qs-table",
			tableCSS: {
				"position": "absolute"
			},
			rowClass: "nitdoc-qs-row",
			rowCatClass: "nitdoc-qs-cat",
			rowSubClass: "nitdoc-qs-sub",
			rowActiveClass: "nitdoc-qs-active",
			rowOverflowClass: "nitdoc-qs-overflow",
			rowOverflowActive: "nitdoc-qs-overflow-active",
			rowNoResultClass: "nitdoc-qs-noresult",
			overflowUpHtml: "&#x25B2;",
			overflowDownHtml: "&#x25BC;",
			noresultText: "Sorry, there is no match, best results are:",
			infoClass: "nitdoc-qs-info",
			gotoPage: "search.html",
			maxSize: 10
		},

		_create: function() {
			this.element
				.attr(this.options.fieldAttrs)
				.addClass(this.options.fieldNotUsedClass)
				.keydown($.proxy(this._doKeyDown, this))
				.keyup($.proxy(this._doKeyUp, this))
				.focusout($.proxy(this._doFocusOut, this))
				.focusin($.proxy(this._doFocusIn, this));

			this._table = $("<table/>")
				.attr("id", this.options.tableID)
				.css(this.options.tableCSS)
				.css("min-width", this.element.outerWidth());
			$("body").append(this._table);

			$(document).click($.proxy(this.closeTable, this));
		},

		/* events */

		_doKeyDown: function(event) {
			switch(event.keyCode) {
				case 38: // Up
					this._selectPrev();
					return false;
				case 40: // Down
					this._selectNext();
					return false;
				default:
					return true;
			 }
		},

		_doKeyUp: function(event) {
			switch(event.keyCode) {
				case 38: // Up
				case 40: // Down
					break;
				case 13: // Enter
					this._loadResult();
					break;
				case 27: // Escape
					this.element.blur();
					this.closeTable();
					break;
				default: // Other keys
					utils.delayEvent($.proxy(this.search, this));
					break;
			}
		},

		_doFocusOut: function() {
			if(this.element.val() == "") {
				this.element.addClass(this.options.fieldNotUsedClass);
				this.element.val(this.options.fieldAttrs.value);
			}
		},

		_doFocusIn: function() {
			if(this.element.val() == this.options.fieldAttrs.value) {
				this.element.removeClass(this.options.fieldNotUsedClass);
				this.element.val("");
			}
		},

		/* Result lookup */

		_getResults: function(query) {
			var results = {};
			results.matches = [];
			for(var entry in this.options.list) {
				if(!entry.startsWith(query, true)) {
					continue;
				}
				var cat = {
					name: entry,
					entries: this.options.list[entry]
				};
				results.matches[results.matches.length] = cat;

				if(entry == query) {
					cat.rank = 3;
				} else if(entry.toUpperCase() == query.toUpperCase()) {
					cat.rank = 2;
				} else {
					cat.rank = 1 + query.dice(entry);
				}
			}
			results.matches.sort(this._rankSorter);
			results.partials = new Array();
			if(results.matches.length == 0) {
				for(var entry in this.options.list) {
					var cat = {
						name: entry,
						entries: this.options.list[entry]
					}
					cat.rank = query.dice(entry);
					if(cat.rank > 0) {
						results.partials[results.partials.length] = cat;
					}
				}
				results.partials.sort(this._rankSorter);
			}
			return results;
		},

		_rankSorter: function(a, b){
			if(a.rank < b.rank) {
				return 1;
			} else if(a.rank > b.rank) {
				return -1;
			}
			return 0;
		},

		/* Results table */

		search: function() {
			var query = this.element.val();
			if(query) {
				var results = this._getResults(query);
				this.openTable(query, results);
			}
		},

		openTable: function(query, results) {
			this._table.empty();
			this._rows = [];
			this._index = -1;

			var resultSet = results.matches;
			if(resultSet.length == 0) {
				resultSet = results.partials
			}

			for(var i in resultSet) {
				var cat = resultSet[i];
				var result = cat.entries[0];
				this.addRow(cat.name, result.txt, result.url, this.options.rowCatClass)
				for(var j = 1; j < cat.entries.length; j++) {
					var result = cat.entries[j];
					this.addRow(cat.name, result.txt, result.url, this.options.rowSubClass)
				}
			}

			if(this._rows.length >= this.options.maxSize) {
				this.addOverflowUp();
				this.addOverflowDown();
			}
			if(results.matches.length == 0) {
				this.addNoResultRow();
			}

			if(resultSet.length > 0) {
				this._setIndex(0);
			}
			this._table.show();
			this._autosizeTable();
		},

		closeTable: function(target) {
			if(target != this.element && target != this._table) {
				this._table.hide();
			}
		},

		addRow: function(name, txt, url, cls) {
			var row = $("<tr/>")
				.addClass(this.options.rowClass)
				.data("searchDetails", {name: name, url: url})
				.data("index", this._rows.length)
				.append(
					$("<td/>")
						.html(name)
						.addClass(cls)
				)
				.append(
					$("<td/>")
						.html(txt + "&nbsp;&raquo;")
						.addClass(this.options.infoClass)
				)
				.mouseover($.proxy(this._mouseOverRow, this))
				.click($.proxy(this._clickRow, this))
			this._rows.push(row);
			if(this._rows.length >= this.options.maxSize) {
				row.hide();
			}
			this._table.append(row);
		},

		addOverflowUp: function() {
			this._table.prepend(
				$("<tr/>")
					.addClass(this.options.rowOverflowClass)
					.append(
						$("<td/>")
							.attr("colspan", 2)
							.html(this.options.overflowUpHtml)
					)
					.click($.proxy(this._clickPrev, this))
			);
		},

		addOverflowDown: function() {
			this._table.append(
				$("<tr/>")
					.addClass(this.options.rowOverflowClass)
					.addClass(this.options.rowOverflowActive)
					.append(
						$("<td/>")
							.attr("colspan", 2)
							.html(this.options.overflowDownHtml)
					)
					.click($.proxy(this._clickNext, this))
			);
		},

		addNoResultRow: function() {
			this._table.prepend(
				$("<tr/>")
				.addClass(this.options.rowNoResultClass)
				.append(
					$("<td/>")
					.attr("colspan", "2")
					.text(this.options.noresultText)
				)
			);
		},

		_autosizeTable: function() {
			this._table.position({
				my: "right top",
				at: "right bottom",
				of: this.element
			});
		},

		_hasIndex: function(index) {
			return index >= 0 && index < this._rows.length;
		},

		_hasPrev: function(index) {
			return index - 1 >= 0;
		},

		_hasNext: function(index) {
			return index + 1 < this._rows.length;
		},

		_setIndex: function(index) {
			if(this._hasIndex(this._index)) {
				this._rows[this._index].removeClass(this.options.rowActiveClass);
			}
			this._index = index;
			if(this._hasIndex(this._index)) {
				this._rows[this._index].addClass(this.options.rowActiveClass);
			}
		},

		_selectPrev: function() {
			if(this._hasPrev(this._index)) {
				this._setIndex(this._index - 1);
				if(!this._rows[this._index].is(":visible")) {
					this._table.find("tr." + this.options.rowClass + ":visible").last().hide();
					this._table.find("tr." + this.options.rowOverflowClass).addClass(this.options.rowOverflowActive);
					this._rows[this._index].show();
					if(!this._hasPrev(this._index)) {
						this._table.find("tr." + this.options.rowOverflowClass).removeClass(this.options.rowOverflowActive);
					}
					this._autosizeTable();
				}
			}
		},

		_selectNext: function() {
			if(this._hasNext(this._index)) {
				this._setIndex(this._index + 1);
				if(!this._rows[this._index].is(":visible")) {
					this._table.find("tr." + this.options.rowClass + ":visible").first().hide();
					this._table.find("tr." + this.options.rowOverflowClass).addClass(this.options.rowOverflowActive);
					this._rows[this._index].show();
					if(!this._hasNext(this._index)) {
						this._table.find("tr." + this.options.rowOverflowClass).removeClass(this.options.rowOverflowActive);
					}
					this._autosizeTable();
				}
			}
		},

		// Load selected search result page
		_loadResult: function() {
			if(this._index > -1) {
				window.location = this._rows[this._index].data("searchDetails").url;
				return;
			}
			if(this.element.val().length == 0) { return; }

			window.location = this.options.gotoPage + "#q=" + this.element.val();
			if(window.location.href.indexOf(this.options.gotoPage) > -1) {
				location.reload();
			}
		},

		/* table events */

		_clickNext: function(event) {
			event.stopPropagation();
			this._selectNext();
		},

		_clickPrev: function(event) {
			event.stopPropagation();
			this._selectPrev();
		},

		_clickRow: function(event) {
			window.location = $(event.currentTarget).data("searchDetails")["url"];
		},

		_mouseOverRow: function(event) {
			this._setIndex($(event.currentTarget).data("index"));
		}
	});

	var searchField = $("<input/>")
	.addClass("nitdoc-qs-field-notused")
	.attr({
		id: "nitdoc-qs-field",
		type: "text",
	})

	$("nav.main ul").append(
		$("<li/>")
			.attr("id", "nitdoc-qs-li")
			.append(searchField)
	);

	searchField.quicksearch({
		list: this.nitdocQuickSearchRawList
	});
});
