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
public class Wordie.Window: Gtk.ApplicationWindow {
    private Wordie.Application app;
	//private Wordie.Services.Settings settings; 
    private Widgets.HeaderBar header_bar;


	public Window (Wordie.Application app) {
        Object (application: app);
        this.app = app;

    	build_ui ();
    	//connect_signals (app);
    	//load_settings ();	
	}

	void build_ui () {
        // const string ELEMENTARY_STYLESHEET = """
        //     .container {
        //         border: 1px solid #eeeeee;
        //     }
        // """;

		//Gtk.Settings.get_default ().gtk_application_prefer_dark_theme = true;
    	//Granite.Widgets.Utils.set_theming_for_screen (this.get_screen (), ELEMENTARY_STYLESHEET,
        //                                          Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION);

        this.set_default_size (400, 400);

        header_bar = new Widgets.HeaderBar(this.app);
        set_titlebar(header_bar);


        //Main Container
        var container = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        container.pack_start (new Widgets.WordViewer (), true, true, 0);
        container.pack_end (new Widgets.ExtrasViewer (), false, false, 0);
        this.add (container);
	}

	/*void connect_signals () {
        header_bar.button_clicked.connect ((button) => {
            var item = slide_manager.request_new_item (button);

            if (item != null) {
                toolbar.item_selected (item);
            }
        });
	}

	private void load_settings () {
    	resize (settings.window_width, settings.window_height);
	}


	protected override bool delete_event (Gdk.EventAny event) {
        stdout.printf ("%s\n", slide_manager.serialise ());
        stderr.printf ("exiting...");
        int width;
        int height;
        int x;
        int y;

        get_size (out width, out height);
        get_position (out x, out y);

        settings.pos_x = x;
        settings.pos_y = y;
        settings.window_width = width;
        settings.window_height = height;

        return false;
    }
*/

}