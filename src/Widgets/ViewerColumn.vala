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

using Wordie;
class Wordie.Widgets.ViewerColumn: Gtk.Box {
	private string label_text;
	
	public ViewerColumn (string label_text, Gtk.Orientation orientation = Gtk.Orientation.VERTICAL, int spacing = 0) {
		Object (orientation: orientation, spacing: spacing);
		this.label_text = label_text;
       	build_ui ();
       	//connect_signals ();
	}

	void build_ui () {
		var title_label = new Gtk.Label ("<b>" + this.label_text + "</b>");
		title_label.use_markup = true;
		title_label.justify = Gtk.Justification.LEFT;
		this.add (title_label);

		var definition_container = new Gtk.Box (Gtk.Orientation.HORIZONTAL, 0);
		var btn = new Gtk.Button.from_icon_name ("document-new", Gtk.IconSize.BUTTON);
		definition_container.pack_start (btn, false, false, 0);

		var definitions_box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
		for (var i =0; i < 10; i++) {
			definitions_box.add ();
		}
		this.add (definitions_box);
	}
}