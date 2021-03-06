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
class Wordie.Widgets.ExtrasSideBar: Gtk.ListBox {
	
	public ExtrasSideBar () {
       	build_ui ();
       	//connect_signals ();
	}

	void build_ui () {
		this.add (new Widgets.ExtrasSideBarRow (_("Synonyms"), "1"));
		this.add (new Widgets.ExtrasSideBarRow (_("Antonyms"), "1"));
		this.add (new Widgets.ExtrasSideBarRow (_("Derivatives"), "1"));
		this.add (new Widgets.ExtrasSideBarRow (_("Related"), "1"));
	}
}