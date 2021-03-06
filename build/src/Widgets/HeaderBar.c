/* HeaderBar.c generated by valac 0.34.0, the Vala compiler
 * generated from HeaderBar.vala, do not modify */

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
#include <gtk/gtk.h>
#include <granite.h>
#include <glib/gi18n-lib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define WORDIE_TYPE_HEADER_BUTTON (wordie_header_button_get_type ())

#define WORDIE_WIDGETS_TYPE_HEADER_BAR (wordie_widgets_header_bar_get_type ())
#define WORDIE_WIDGETS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WORDIE_WIDGETS_TYPE_HEADER_BAR, WordieWidgetsHeaderBar))
#define WORDIE_WIDGETS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WORDIE_WIDGETS_TYPE_HEADER_BAR, WordieWidgetsHeaderBarClass))
#define WORDIE_WIDGETS_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WORDIE_WIDGETS_TYPE_HEADER_BAR))
#define WORDIE_WIDGETS_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WORDIE_WIDGETS_TYPE_HEADER_BAR))
#define WORDIE_WIDGETS_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WORDIE_WIDGETS_TYPE_HEADER_BAR, WordieWidgetsHeaderBarClass))

typedef struct _WordieWidgetsHeaderBar WordieWidgetsHeaderBar;
typedef struct _WordieWidgetsHeaderBarClass WordieWidgetsHeaderBarClass;
typedef struct _WordieWidgetsHeaderBarPrivate WordieWidgetsHeaderBarPrivate;

#define WORDIE_TYPE_APPLICATION (wordie_application_get_type ())
#define WORDIE_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WORDIE_TYPE_APPLICATION, WordieApplication))
#define WORDIE_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WORDIE_TYPE_APPLICATION, WordieApplicationClass))
#define WORDIE_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WORDIE_TYPE_APPLICATION))
#define WORDIE_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WORDIE_TYPE_APPLICATION))
#define WORDIE_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WORDIE_TYPE_APPLICATION, WordieApplicationClass))

typedef struct _WordieApplication WordieApplication;
typedef struct _WordieApplicationClass WordieApplicationClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;
typedef struct _WordieApplicationPrivate WordieApplicationPrivate;

#define WORDIE_TYPE_WINDOW (wordie_window_get_type ())
#define WORDIE_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WORDIE_TYPE_WINDOW, WordieWindow))
#define WORDIE_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WORDIE_TYPE_WINDOW, WordieWindowClass))
#define WORDIE_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WORDIE_TYPE_WINDOW))
#define WORDIE_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WORDIE_TYPE_WINDOW))
#define WORDIE_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WORDIE_TYPE_WINDOW, WordieWindowClass))

typedef struct _WordieWindow WordieWindow;
typedef struct _WordieWindowClass WordieWindowClass;

#define WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON (wordie_widgets_header_bar_headerbar_button_get_type ())
#define WORDIE_WIDGETS_HEADER_BAR_HEADERBAR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON, WordieWidgetsHeaderBarHeaderbarButton))
#define WORDIE_WIDGETS_HEADER_BAR_HEADERBAR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON, WordieWidgetsHeaderBarHeaderbarButtonClass))
#define WORDIE_WIDGETS_HEADER_BAR_IS_HEADERBAR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON))
#define WORDIE_WIDGETS_HEADER_BAR_IS_HEADERBAR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON))
#define WORDIE_WIDGETS_HEADER_BAR_HEADERBAR_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON, WordieWidgetsHeaderBarHeaderbarButtonClass))

typedef struct _WordieWidgetsHeaderBarHeaderbarButton WordieWidgetsHeaderBarHeaderbarButton;
typedef struct _WordieWidgetsHeaderBarHeaderbarButtonClass WordieWidgetsHeaderBarHeaderbarButtonClass;
typedef struct _WordieWidgetsHeaderBarHeaderbarButtonPrivate WordieWidgetsHeaderBarHeaderbarButtonPrivate;
#define _g_free0(var) ((var == NULL) ? NULL : (var = (g_free (var), NULL)))
typedef struct _Block2Data Block2Data;

typedef enum  {
	WORDIE_HEADER_BUTTON_UNDO,
	WORDIE_HEADER_BUTTON_REDO,
	WORDIE_HEADER_BUTTON_TEXT,
	WORDIE_HEADER_BUTTON_IMAGE,
	WORDIE_HEADER_BUTTON_SHAPE
} WordieHeaderButton;

struct _WordieWidgetsHeaderBar {
	GtkHeaderBar parent_instance;
	WordieWidgetsHeaderBarPrivate * priv;
};

struct _WordieWidgetsHeaderBarClass {
	GtkHeaderBarClass parent_class;
};

struct _WordieWidgetsHeaderBarPrivate {
	WordieApplication* app;
};

struct _Block1Data {
	int _ref_count_;
	WordieWidgetsHeaderBar* self;
	GtkSearchEntry* search_entry;
};

struct _WordieApplication {
	GraniteApplication parent_instance;
	WordieApplicationPrivate * priv;
	WordieWindow* window;
};

struct _WordieApplicationClass {
	GraniteApplicationClass parent_class;
};

struct _WordieWidgetsHeaderBarHeaderbarButton {
	GtkButton parent_instance;
	WordieWidgetsHeaderBarHeaderbarButtonPrivate * priv;
};

struct _WordieWidgetsHeaderBarHeaderbarButtonClass {
	GtkButtonClass parent_class;
};

struct _Block2Data {
	int _ref_count_;
	WordieWidgetsHeaderBarHeaderbarButton* self;
	WordieHeaderButton* signal_mask;
};


static gpointer wordie_widgets_header_bar_parent_class = NULL;
static gpointer wordie_widgets_header_bar_headerbar_button_parent_class = NULL;
extern WordieWidgetsHeaderBar* wordie_widgets_header_bar_headerbar_button_header_bar;
WordieWidgetsHeaderBar* wordie_widgets_header_bar_headerbar_button_header_bar = NULL;

GType wordie_header_button_get_type (void) G_GNUC_CONST;
GType wordie_widgets_header_bar_get_type (void) G_GNUC_CONST;
GType wordie_application_get_type (void) G_GNUC_CONST;
#define WORDIE_WIDGETS_HEADER_BAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WORDIE_WIDGETS_TYPE_HEADER_BAR, WordieWidgetsHeaderBarPrivate))
enum  {
	WORDIE_WIDGETS_HEADER_BAR_DUMMY_PROPERTY
};
WordieWidgetsHeaderBar* wordie_widgets_header_bar_new (WordieApplication* app);
WordieWidgetsHeaderBar* wordie_widgets_header_bar_construct (GType object_type, WordieApplication* app);
static void wordie_widgets_header_bar_build_ui (WordieWidgetsHeaderBar* self);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda5_ (Block1Data* _data1_);
static void ___lambda5__gtk_entry_activate (GtkEntry* _sender, gpointer self);
static void __lambda6_ (WordieWidgetsHeaderBar* self);
GType wordie_window_get_type (void) G_GNUC_CONST;
static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
GType wordie_widgets_header_bar_headerbar_button_get_type (void) G_GNUC_CONST;
enum  {
	WORDIE_WIDGETS_HEADER_BAR_HEADERBAR_BUTTON_DUMMY_PROPERTY
};
WordieWidgetsHeaderBarHeaderbarButton* wordie_widgets_header_bar_headerbar_button_new (const gchar* icon_name, WordieHeaderButton* signal_mask);
WordieWidgetsHeaderBarHeaderbarButton* wordie_widgets_header_bar_headerbar_button_construct (GType object_type, const gchar* icon_name, WordieHeaderButton* signal_mask);
static WordieHeaderButton* _wordie_header_button_dup (WordieHeaderButton* self);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static void ___lambda7_ (Block2Data* _data2_);
static void ____lambda7__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void wordie_widgets_header_bar_headerbar_button_finalize (GObject* obj);
static void wordie_widgets_header_bar_finalize (GObject* obj);


GType wordie_header_button_get_type (void) {
	static volatile gsize wordie_header_button_type_id__volatile = 0;
	if (g_once_init_enter (&wordie_header_button_type_id__volatile)) {
		static const GEnumValue values[] = {{WORDIE_HEADER_BUTTON_UNDO, "WORDIE_HEADER_BUTTON_UNDO", "undo"}, {WORDIE_HEADER_BUTTON_REDO, "WORDIE_HEADER_BUTTON_REDO", "redo"}, {WORDIE_HEADER_BUTTON_TEXT, "WORDIE_HEADER_BUTTON_TEXT", "text"}, {WORDIE_HEADER_BUTTON_IMAGE, "WORDIE_HEADER_BUTTON_IMAGE", "image"}, {WORDIE_HEADER_BUTTON_SHAPE, "WORDIE_HEADER_BUTTON_SHAPE", "shape"}, {0, NULL, NULL}};
		GType wordie_header_button_type_id;
		wordie_header_button_type_id = g_enum_register_static ("WordieHeaderButton", values);
		g_once_init_leave (&wordie_header_button_type_id__volatile, wordie_header_button_type_id);
	}
	return wordie_header_button_type_id__volatile;
}


static gpointer _g_object_ref0 (gpointer self) {
#line 31 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return self ? g_object_ref (self) : NULL;
#line 187 "HeaderBar.c"
}


WordieWidgetsHeaderBar* wordie_widgets_header_bar_construct (GType object_type, WordieApplication* app) {
	WordieWidgetsHeaderBar * self = NULL;
	WordieApplication* _tmp0_ = NULL;
	WordieApplication* _tmp1_ = NULL;
#line 30 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 30 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self = (WordieWidgetsHeaderBar*) g_object_new (object_type, NULL);
#line 31 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp0_ = app;
#line 31 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 31 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (self->priv->app);
#line 31 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self->priv->app = _tmp1_;
#line 33 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_header_bar_set_show_close_button ((GtkHeaderBar*) self, TRUE);
#line 35 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	wordie_widgets_header_bar_build_ui (self);
#line 30 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return self;
#line 213 "HeaderBar.c"
}


WordieWidgetsHeaderBar* wordie_widgets_header_bar_new (WordieApplication* app) {
#line 30 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return wordie_widgets_header_bar_construct (WORDIE_WIDGETS_TYPE_HEADER_BAR, app);
#line 220 "HeaderBar.c"
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return _data1_;
#line 229 "HeaderBar.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 238 "HeaderBar.c"
		WordieWidgetsHeaderBar* self;
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		self = _data1_->self;
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (_data1_->search_entry);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (self);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		g_slice_free (Block1Data, _data1_);
#line 248 "HeaderBar.c"
	}
}


static void __lambda5_ (Block1Data* _data1_) {
	WordieWidgetsHeaderBar* self;
	FILE* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
#line 54 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self = _data1_->self;
#line 55 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp0_ = stdout;
#line 55 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp1_ = gtk_entry_get_text ((GtkEntry*) _data1_->search_entry);
#line 55 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	fprintf (_tmp0_, "%s", _tmp1_);
#line 265 "HeaderBar.c"
}


static void ___lambda5__gtk_entry_activate (GtkEntry* _sender, gpointer self) {
#line 54 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	__lambda5_ (self);
#line 272 "HeaderBar.c"
}


static void __lambda6_ (WordieWidgetsHeaderBar* self) {
	WordieApplication* _tmp0_ = NULL;
	WordieApplication* _tmp1_ = NULL;
	WordieWindow* _tmp2_ = NULL;
	FILE* _tmp3_ = NULL;
#line 84 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp0_ = self->priv->app;
#line 84 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp1_ = self->priv->app;
#line 84 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp2_ = _tmp1_->window;
#line 84 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	granite_application_show_about ((GraniteApplication*) _tmp0_, (GtkWidget*) _tmp2_);
#line 85 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp3_ = stdout;
#line 85 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	fprintf (_tmp3_, "About clicked");
#line 293 "HeaderBar.c"
}


static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
#line 83 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	__lambda6_ ((WordieWidgetsHeaderBar*) self);
#line 300 "HeaderBar.c"
}


static void wordie_widgets_header_bar_build_ui (WordieWidgetsHeaderBar* self) {
	Block1Data* _data1_;
	GraniteWidgetsModeButton* mode_btn = NULL;
	GraniteWidgetsModeButton* _tmp0_ = NULL;
	GtkButton* bookmark_btn = NULL;
	const gchar* _tmp1_ = NULL;
	GtkButton* _tmp2_ = NULL;
	GtkSearchEntry* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	GtkEntryCompletion* completion = NULL;
	GtkEntryCompletion* _tmp5_ = NULL;
	GtkListStore* list_store = NULL;
	GtkListStore* _tmp6_ = NULL;
	GtkTreeIter iter = {0};
	GtkTreeIter _tmp7_ = {0};
	GtkTreeIter _tmp8_ = {0};
	GtkMenu* menu = NULL;
	GtkMenu* _tmp9_ = NULL;
	GtkMenuItem* menu_item_preferences = NULL;
	const gchar* _tmp10_ = NULL;
	GtkMenuItem* _tmp11_ = NULL;
	GraniteWidgetsAppMenu* app_menu = NULL;
	WordieApplication* _tmp12_ = NULL;
	GraniteWidgetsAppMenu* _tmp13_ = NULL;
	GtkMenuItem* about_menu_item = NULL;
	GtkMenuItem* _tmp14_ = NULL;
	GtkMenuItem* _tmp15_ = NULL;
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_return_if_fail (self != NULL);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data1_->_ref_count_ = 1;
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data1_->self = g_object_ref (self);
#line 41 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp0_ = granite_widgets_mode_button_new ();
#line 41 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp0_);
#line 41 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	mode_btn = _tmp0_;
#line 42 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	granite_widgets_mode_button_append_icon (mode_btn, "go-previous", GTK_ICON_SIZE_BUTTON);
#line 43 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	granite_widgets_mode_button_append_icon (mode_btn, "go-next", GTK_ICON_SIZE_BUTTON);
#line 45 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_start ((GtkHeaderBar*) self, (GtkWidget*) mode_btn);
#line 48 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp1_ = _ ("help-about");
#line 48 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp2_ = (GtkButton*) gtk_button_new_from_icon_name (_tmp1_, GTK_ICON_SIZE_BUTTON);
#line 48 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp2_);
#line 48 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	bookmark_btn = _tmp2_;
#line 49 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_start ((GtkHeaderBar*) self, (GtkWidget*) bookmark_btn);
#line 52 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp3_ = (GtkSearchEntry*) gtk_search_entry_new ();
#line 52 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp3_);
#line 52 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data1_->search_entry = _tmp3_;
#line 53 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp4_ = _ ("Search Word or Phrase");
#line 53 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_entry_set_placeholder_text ((GtkEntry*) _data1_->search_entry, _tmp4_);
#line 54 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_signal_connect_data ((GtkEntry*) _data1_->search_entry, "activate", (GCallback) ___lambda5__gtk_entry_activate, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
#line 59 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp5_ = gtk_entry_completion_new ();
#line 59 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	completion = _tmp5_;
#line 61 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_entry_set_completion ((GtkEntry*) _data1_->search_entry, completion);
#line 64 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp6_ = gtk_list_store_new (1, G_TYPE_STRING, -1);
#line 64 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	list_store = _tmp6_;
#line 65 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_entry_completion_set_model (completion, (GtkTreeModel*) list_store);
#line 66 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_entry_completion_set_text_column (completion, 0);
#line 69 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_list_store_append (list_store, &_tmp7_);
#line 69 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	iter = _tmp7_;
#line 70 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp8_ = iter;
#line 70 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_list_store_set (list_store, &_tmp8_, 0, "Burgenland", -1);
#line 72 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_end ((GtkHeaderBar*) self, (GtkWidget*) _data1_->search_entry);
#line 75 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp9_ = (GtkMenu*) gtk_menu_new ();
#line 75 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp9_);
#line 75 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	menu = _tmp9_;
#line 76 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp10_ = _ ("Preferences");
#line 76 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp11_ = (GtkMenuItem*) gtk_menu_item_new_with_label (_tmp10_);
#line 76 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp11_);
#line 76 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	menu_item_preferences = _tmp11_;
#line 77 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_container_add ((GtkContainer*) menu, (GtkWidget*) menu_item_preferences);
#line 79 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp12_ = self->priv->app;
#line 79 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp13_ = granite_widgets_app_menu_new_with_app ((GraniteApplication*) _tmp12_, menu);
#line 79 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp13_);
#line 79 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	app_menu = _tmp13_;
#line 82 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp14_ = app_menu->about_item;
#line 82 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp15_ = _g_object_ref0 (_tmp14_);
#line 82 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	about_menu_item = _tmp15_;
#line 83 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_signal_connect_object (about_menu_item, "activate", (GCallback) ___lambda6__gtk_menu_item_activate, self, 0);
#line 87 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_header_bar_pack_end ((GtkHeaderBar*) self, (GtkWidget*) app_menu);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (about_menu_item);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (app_menu);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (menu_item_preferences);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (menu);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (list_store);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (completion);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (bookmark_btn);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (mode_btn);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	block1_data_unref (_data1_);
#line 39 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data1_ = NULL;
#line 451 "HeaderBar.c"
}


static WordieHeaderButton* _wordie_header_button_dup (WordieHeaderButton* self) {
	WordieHeaderButton* dup;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	dup = g_new0 (WordieHeaderButton, 1);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	memcpy (dup, self, sizeof (WordieHeaderButton));
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return dup;
#line 463 "HeaderBar.c"
}


static gpointer __wordie_header_button_dup0 (gpointer self) {
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return self ? _wordie_header_button_dup (self) : NULL;
#line 470 "HeaderBar.c"
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_atomic_int_inc (&_data2_->_ref_count_);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return _data2_;
#line 479 "HeaderBar.c"
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
#line 488 "HeaderBar.c"
		WordieWidgetsHeaderBarHeaderbarButton* self;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		self = _data2_->self;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		_g_free0 (_data2_->signal_mask);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		_g_object_unref0 (self);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		g_slice_free (Block2Data, _data2_);
#line 498 "HeaderBar.c"
	}
}


static void ___lambda7_ (Block2Data* _data2_) {
	WordieWidgetsHeaderBarHeaderbarButton* self;
	WordieWidgetsHeaderBar* _tmp0_ = NULL;
	WordieHeaderButton* _tmp1_ = NULL;
#line 103 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self = _data2_->self;
#line 104 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp0_ = wordie_widgets_header_bar_headerbar_button_header_bar;
#line 104 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp1_ = _data2_->signal_mask;
#line 104 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_signal_emit_by_name (_tmp0_, "button-clicked", *_tmp1_);
#line 515 "HeaderBar.c"
}


static void ____lambda7__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 103 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	___lambda7_ (self);
#line 522 "HeaderBar.c"
}


WordieWidgetsHeaderBarHeaderbarButton* wordie_widgets_header_bar_headerbar_button_construct (GType object_type, const gchar* icon_name, WordieHeaderButton* signal_mask) {
	WordieWidgetsHeaderBarHeaderbarButton * self = NULL;
	Block2Data* _data2_;
	WordieHeaderButton* _tmp0_ = NULL;
	WordieHeaderButton* _tmp1_ = NULL;
	GtkImage* image = NULL;
	const gchar* _tmp2_ = NULL;
	GtkImage* _tmp3_ = NULL;
	GtkImage* _tmp4_ = NULL;
	GtkImage* _tmp5_ = NULL;
	WordieHeaderButton* _tmp6_ = NULL;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_return_val_if_fail (icon_name != NULL, NULL);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data2_ = g_slice_new0 (Block2Data);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data2_->_ref_count_ = 1;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp0_ = signal_mask;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp1_ = __wordie_header_button_dup0 (_tmp0_);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_free0 (_data2_->signal_mask);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data2_->signal_mask = _tmp1_;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self = (WordieWidgetsHeaderBarHeaderbarButton*) g_object_new (object_type, NULL);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data2_->self = g_object_ref (self);
#line 95 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp2_ = icon_name;
#line 95 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp3_ = (GtkImage*) gtk_image_new_from_icon_name (_tmp2_, GTK_ICON_SIZE_BUTTON);
#line 95 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_ref_sink (_tmp3_);
#line 95 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	image = _tmp3_;
#line 96 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp4_ = image;
#line 96 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_object_set ((GtkWidget*) _tmp4_, "margin", 3, NULL);
#line 100 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp5_ = image;
#line 100 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp5_);
#line 102 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_tmp6_ = _data2_->signal_mask;
#line 102 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	if (_tmp6_ != NULL) {
#line 103 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
		g_signal_connect_data ((GtkButton*) self, "clicked", (GCallback) ____lambda7__gtk_button_clicked, block2_data_ref (_data2_), (GClosureNotify) block2_data_unref, 0);
#line 577 "HeaderBar.c"
	}
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (image);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	block2_data_unref (_data2_);
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_data2_ = NULL;
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return self;
#line 587 "HeaderBar.c"
}


WordieWidgetsHeaderBarHeaderbarButton* wordie_widgets_header_bar_headerbar_button_new (const gchar* icon_name, WordieHeaderButton* signal_mask) {
#line 93 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	return wordie_widgets_header_bar_headerbar_button_construct (WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON, icon_name, signal_mask);
#line 594 "HeaderBar.c"
}


static void wordie_widgets_header_bar_headerbar_button_class_init (WordieWidgetsHeaderBarHeaderbarButtonClass * klass) {
#line 90 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	wordie_widgets_header_bar_headerbar_button_parent_class = g_type_class_peek_parent (klass);
#line 90 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->finalize = wordie_widgets_header_bar_headerbar_button_finalize;
#line 603 "HeaderBar.c"
}


static void wordie_widgets_header_bar_headerbar_button_instance_init (WordieWidgetsHeaderBarHeaderbarButton * self) {
}


static void wordie_widgets_header_bar_headerbar_button_finalize (GObject* obj) {
	WordieWidgetsHeaderBarHeaderbarButton * self;
#line 90 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WORDIE_WIDGETS_HEADER_BAR_TYPE_HEADERBAR_BUTTON, WordieWidgetsHeaderBarHeaderbarButton);
#line 90 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (wordie_widgets_header_bar_headerbar_button_parent_class)->finalize (obj);
#line 617 "HeaderBar.c"
}


GType wordie_widgets_header_bar_headerbar_button_get_type (void) {
	static volatile gsize wordie_widgets_header_bar_headerbar_button_type_id__volatile = 0;
	if (g_once_init_enter (&wordie_widgets_header_bar_headerbar_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WordieWidgetsHeaderBarHeaderbarButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wordie_widgets_header_bar_headerbar_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WordieWidgetsHeaderBarHeaderbarButton), 0, (GInstanceInitFunc) wordie_widgets_header_bar_headerbar_button_instance_init, NULL };
		GType wordie_widgets_header_bar_headerbar_button_type_id;
		wordie_widgets_header_bar_headerbar_button_type_id = g_type_register_static (gtk_button_get_type (), "WordieWidgetsHeaderBarHeaderbarButton", &g_define_type_info, 0);
		g_once_init_leave (&wordie_widgets_header_bar_headerbar_button_type_id__volatile, wordie_widgets_header_bar_headerbar_button_type_id);
	}
	return wordie_widgets_header_bar_headerbar_button_type_id__volatile;
}


static void wordie_widgets_header_bar_class_init (WordieWidgetsHeaderBarClass * klass) {
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	wordie_widgets_header_bar_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_type_class_add_private (klass, sizeof (WordieWidgetsHeaderBarPrivate));
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (klass)->finalize = wordie_widgets_header_bar_finalize;
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	g_signal_new ("button_clicked", WORDIE_WIDGETS_TYPE_HEADER_BAR, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__ENUM, G_TYPE_NONE, 1, WORDIE_TYPE_HEADER_BUTTON);
#line 642 "HeaderBar.c"
}


static void wordie_widgets_header_bar_instance_init (WordieWidgetsHeaderBar * self) {
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self->priv = WORDIE_WIDGETS_HEADER_BAR_GET_PRIVATE (self);
#line 649 "HeaderBar.c"
}


static void wordie_widgets_header_bar_finalize (GObject* obj) {
	WordieWidgetsHeaderBar * self;
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WORDIE_WIDGETS_TYPE_HEADER_BAR, WordieWidgetsHeaderBar);
#line 27 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	_g_object_unref0 (self->priv->app);
#line 26 "/home/aberba/workspace/vala/wordie/src/Widgets/HeaderBar.vala"
	G_OBJECT_CLASS (wordie_widgets_header_bar_parent_class)->finalize (obj);
#line 661 "HeaderBar.c"
}


GType wordie_widgets_header_bar_get_type (void) {
	static volatile gsize wordie_widgets_header_bar_type_id__volatile = 0;
	if (g_once_init_enter (&wordie_widgets_header_bar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WordieWidgetsHeaderBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wordie_widgets_header_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WordieWidgetsHeaderBar), 0, (GInstanceInitFunc) wordie_widgets_header_bar_instance_init, NULL };
		GType wordie_widgets_header_bar_type_id;
		wordie_widgets_header_bar_type_id = g_type_register_static (gtk_header_bar_get_type (), "WordieWidgetsHeaderBar", &g_define_type_info, 0);
		g_once_init_leave (&wordie_widgets_header_bar_type_id__volatile, wordie_widgets_header_bar_type_id);
	}
	return wordie_widgets_header_bar_type_id__volatile;
}



