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
public enum Wordie.HeaderButton {
    UNDO,
    REDO,
    TEXT,
    IMAGE,
    SHAPE;
}

class Wordie.Widgets.HeaderBar: Gtk.HeaderBar {
	private Wordie.Application app;
	public signal void button_clicked (Wordie.HeaderButton button);
	
	public HeaderBar (Application app) {
		this.app = app;
		//set_title ("Wordie");
       	set_show_close_button(true);

       	build_ui ();
       	//connect_signals ();
	}

	void build_ui () {
		// //header bar mode button
		var mode_btn = new Granite.Widgets.ModeButton();
		mode_btn.append_icon ("go-previous", Gtk.IconSize.BUTTON);
		mode_btn.append_icon ("go-next", Gtk.IconSize.BUTTON);
		//mode_btn.append_text(_("All"));
		pack_start (mode_btn);

		// Bookmark Button
		var bookmark_btn = new Gtk.Button.from_icon_name (_("help-about"));
		pack_start (bookmark_btn);

		// Search Entry
		var search_entry = new Gtk.SearchEntry ();
        search_entry.placeholder_text = _("Search Word or Phrase");
        search_entry.activate.connect (() => {
        	stdout.printf(search_entry.get_text ());
        });

        // The EntryCompletion:
		Gtk.EntryCompletion completion = new Gtk.EntryCompletion ();
		//alternate history (when empty) with search suggestions 
		search_entry.set_completion (completion); 

		// Create, fill & register a ListStore:
		Gtk.ListStore list_store = new Gtk.ListStore (1, typeof (string));
		completion.set_model (list_store);
		completion.set_text_column (0);
		Gtk.TreeIter iter;

		list_store.append (out iter);
		list_store.set (iter, 0, "Burgenland");

        pack_end (search_entry);

		//header bar application menu
		var menu = new Gtk.Menu ();
		var menu_item_preferences = new Gtk.MenuItem.with_label (_("Preferences"));
		menu.add(menu_item_preferences);

		var app_menu = new Granite.Widgets.AppMenu.with_app (this.app, menu);

		// About menu item
		var about_menu_item = app_menu.about_item;
		about_menu_item.activate.connect (() => {
			this.app.show_about (this.app.window);
			stdout.printf("About clicked");
		});
        pack_end (app_menu);
	}

	protected class HeaderbarButton : Gtk.Button {
        public static Widgets.HeaderBar header_bar;

        protected HeaderbarButton (string icon_name, HeaderButton? signal_mask) {

            var image = new Gtk.Image.from_icon_name (icon_name, Gtk.IconSize.BUTTON);
            image.margin = 3;

            //get_style_context ().add_class ("spice");

            this.add (image);

            if (signal_mask != null) {
                this.clicked.connect (() => {
                    header_bar.button_clicked (signal_mask);
                });
            }
        }
    }
}