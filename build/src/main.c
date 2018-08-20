/* main.c generated by valac 0.34.0, the Vala compiler
 * generated from main.vala, do not modify */

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

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <granite.h>


#define WORDIE_TYPE_APPLICATION (wordie_application_get_type ())
#define WORDIE_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WORDIE_TYPE_APPLICATION, WordieApplication))
#define WORDIE_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WORDIE_TYPE_APPLICATION, WordieApplicationClass))
#define WORDIE_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WORDIE_TYPE_APPLICATION))
#define WORDIE_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WORDIE_TYPE_APPLICATION))
#define WORDIE_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WORDIE_TYPE_APPLICATION, WordieApplicationClass))

typedef struct _WordieApplication WordieApplication;
typedef struct _WordieApplicationClass WordieApplicationClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



gint _vala_main (gchar** args, int args_length1);
GType wordie_application_get_type (void) G_GNUC_CONST;
WordieApplication* wordie_application_new (void);
WordieApplication* wordie_application_construct (GType object_type);


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	WordieApplication* app = NULL;
	WordieApplication* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	gint _tmp2_ = 0;
#line 20 "/home/aberba/workspace/vala/wordie/src/main.vala"
	_tmp0_ = wordie_application_new ();
#line 20 "/home/aberba/workspace/vala/wordie/src/main.vala"
	app = _tmp0_;
#line 21 "/home/aberba/workspace/vala/wordie/src/main.vala"
	_tmp1_ = args;
#line 21 "/home/aberba/workspace/vala/wordie/src/main.vala"
	_tmp1__length1 = args_length1;
#line 21 "/home/aberba/workspace/vala/wordie/src/main.vala"
	_tmp2_ = granite_application_run ((GraniteApplication*) app, _tmp1_, _tmp1__length1);
#line 21 "/home/aberba/workspace/vala/wordie/src/main.vala"
	result = _tmp2_;
#line 21 "/home/aberba/workspace/vala/wordie/src/main.vala"
	_g_object_unref0 (app);
#line 21 "/home/aberba/workspace/vala/wordie/src/main.vala"
	return result;
#line 72 "main.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 19 "/home/aberba/workspace/vala/wordie/src/main.vala"
	return _vala_main (argv, argc);
#line 82 "main.c"
}


