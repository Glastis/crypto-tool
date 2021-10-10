//
// Created by glastis on 10-Oct-21.
//

#ifndef CRYPTO_TOOL_UTILITIES_H
#define CRYPTO_TOOL_UTILITIES_H

#include <gtk/gtk.h>

void                    widget_set_margin_sides(GtkWidget *widget, unsigned int top, unsigned int bottom, unsigned int left, unsigned int right);
void                    widget_set_margin(GtkWidget *widget, unsigned int margin);
void                    textview_set_margin_sides(GtkTextView *widget, unsigned int top, unsigned int bottom, unsigned int left, unsigned int right);
void                    textview_set_margin(GtkTextView *widget, unsigned int margin);

#endif //CRYPTO_TOOL_UTILITIES_H
