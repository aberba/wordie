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

public class Wordie.Application : Granite.Application {
    public Wordie.Window? window = null;

    construct {

         /*
        * Use flag  ApplicationFlags.HANDLES_COMMAND_LINE for apps that
        * have implemented support for commandline
        */
        flags |= ApplicationFlags.HANDLES_OPEN;

        program_name = "Wordie";
        exec_name = "wordie";

        app_copyright = "2016";
        application_id = "org.laberba.wordie";
        app_icon = "wordie";
        app_launcher = "data/Wordie.desktop";
        app_years = "2014-2016";

        main_url            = "http://example.com/home";
        bug_url             = "https://example.com/bug";
        help_url            = "https://example.com/help";
        translate_url       = "http://example.com/translate";

        about_authors       = {"Your Name <example@mail.com>"};
        about_documenters   = {"Your Name <example@mail.com>"};
        about_artists       = {"Your Name <example@mail.com>"};
        about_comments      = "A simple dictionary application";
        about_translators   = "translator-credits";
        about_license_type  = Gtk.License.GPL_3_0;
    }

    //  Initialize all objects here
    public override void activate () {

        if (window == null) {
            window = new Wordie.Window (this);
            window.destroy.connect (() => {
                window = null;
            });

            add_window (window);
            window.show_all ();
        } 
        add_window(window);

        window.present (); //varify implementation
        
    }
}