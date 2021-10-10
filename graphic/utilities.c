//
// Created by glastis on 10-Oct-21.
//

#include "utilities.h"

void                    widget_set_margin_sides(GtkWidget *widget, unsigned int top, unsigned int bottom, unsigned int left, unsigned int right)
{
    gtk_widget_set_margin_start(widget, (gint)left);
    gtk_widget_set_margin_end(widget, (gint)right);
    gtk_widget_set_margin_top(widget, (gint)top);
    gtk_widget_set_margin_bottom(widget, (gint)bottom);
}

void                    widget_set_margin(GtkWidget *widget, unsigned int margin)
{
    widget_set_margin_sides(widget, margin, margin, margin, margin);
}

void                    textview_set_margin_sides(GtkTextView *widget, unsigned int top, unsigned int bottom, unsigned int left, unsigned int right)
{
    gtk_text_view_set_left_margin(widget, (gint)left);
    gtk_text_view_set_right_margin(widget, (gint)right);
    gtk_text_view_set_top_margin(widget, (gint)top);
    gtk_text_view_set_bottom_margin(widget, (gint)bottom);
}

void                    textview_set_margin(GtkTextView *widget, unsigned int margin)
{
    textview_set_margin_sides(widget, margin, margin, margin, margin);
}