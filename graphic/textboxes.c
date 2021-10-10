//
// Created by glastis on 10-Oct-21.
//

#include <string.h>
#include "textboxes.h"
#include "utilities.h"

GtkGrid                 *create_textarea_counted(const char *default_value)
{
    GtkTextView         *text_view;
    GtkGrid             *grid;
    GtkTextBuffer       *buffer;

    grid = GTK_GRID(gtk_grid_new());
    widget_set_margin(GTK_WIDGET(grid), TEXTBOXES_MARGIN);

    text_view = GTK_TEXT_VIEW(gtk_text_view_new());
    gtk_widget_set_hexpand(GTK_WIDGET(text_view), TRUE);
    gtk_grid_attach(grid, GTK_WIDGET(text_view), 0, 0, 1, 1);
    textview_set_margin(text_view, TEXT_MARGIN);
    buffer = gtk_text_view_get_buffer(text_view);
    if (default_value)
    {
        gtk_text_buffer_set_text(buffer, default_value, (int)strlen(default_value));
    }
    return grid;
}