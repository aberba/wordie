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
class Wordie.Widgets.ExtrasPane: Gtk.Box {
	//public Gtk.Stack stack;
	Gtk.ScrolledWindow scrolled_window;
	Gtk.ListBox list_box;
	
	public ExtrasPane (Gtk.Orientation orientation = Gtk.Orientation.VERTICAL, int spacing = 0) {
		Object (orientation: orientation, spacing: spacing);
       	build_ui ();
       	//connect_signals ();
	}

	void build_ui () {
		scrolled_window = new Gtk.ScrolledWindow (null, null);
		var words = new Gee.ArrayList<string>();
		for (var i =0; i < 10; i++) {
			words.add ("Row Item" + i.to_string());
		}
		build_list (words);
		pack_start (scrolled_window, true, true, 0);
	}

	void build_list (Gee.ArrayList<string> words) {
		list_box = new Gtk.ListBox ();
		
		foreach (var word in words) {
			var row = new Widgets.ExtrasPaneRow (word);
			list_box.add (row);
		}
		scrolled_window.add (list_box);
	}
}