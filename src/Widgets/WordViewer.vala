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

class Wordie.Widgets.WordViewer: Gtk.Box {
	public signal void button_clicked (Wordie.HeaderButton button);
	
	public WordViewer (Gtk.Orientation orientation = Gtk.Orientation.VERTICAL, int spacing = 0) {
		Object (orientation: orientation, spacing: spacing);
       	build_ui ();
       	//connect_signals ();
	}

	void build_ui () {
		//get_style_context ().add_class ("container");
		// ScrolledWindow containing word definitions 
		Gtk.ScrolledWindow scrolled = new Gtk.ScrolledWindow (null, null);

		// Gtk.TextView view = new Gtk.TextView ();
		// view.set_wrap_mode (Gtk.WrapMode.WORD);
		// view.buffer.text = "Lorem Ipsum";
		// //view.editable = false;
		// view.left_margin = 6;
		// view.right_margin = 6;

		var view = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
		view.pack_start (new Widgets.ViewerColumn ("Noun"), false, false, 0);
		view.pack_start (new Widgets.ViewerColumn ("Verb"), false, false, 0);
		view.pack_start (new Widgets.ViewerColumn ("Adverb"), false, false, 0);


		scrolled.add (view);
		pack_start (scrolled, true, true, 0);
	}
}