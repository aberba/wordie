/* Copyright 2016 Lawrence Aberba (https://laberba.github.io)
*
* This file is part of Wordie.
*
* Wordie is free software: you can redistribute it
* and/or modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Wordie is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with Wordie. If not, see http://www.gnu.org/licenses/.
*/

class Wordie.Widgets.ExtrasSideBarRow: Gtk.ListBoxRow {
	private string label_text;
	private string word_count;
	
	public ExtrasSideBarRow (string label_text, string word_count) {
		this.label_text = label_text;
		this.word_count = word_count;
       	build_ui ();
       	//connect_signals ();
	}

	void build_ui () {
		var label = new Gtk.Label (this.label_text);
		label.justify = Gtk.Justification.LEFT;
		//label.xalign = 0;

		var count_label = new Gtk.Label ("<b>" + this.word_count + "</b>");
		count_label.use_markup = true;
		count_label.justify = Gtk.Justification.RIGHT;

		var grid = new Gtk.Grid ();
		grid.row_homogeneous = true;
		grid.column_homogeneous = true;
		grid.column_spacing = 12;
		grid.attach (label, 0, 0, 2, 1);
		grid.attach_next_to (count_label, label, Gtk.PositionType.RIGHT, 1, 1);

		this.add (grid);
	}
}