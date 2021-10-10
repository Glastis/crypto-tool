//
// Created by glastis on 10/5/21.
//

#include "master.h"
#include "sidebar.h"

void                    main_window(GtkApplication* app, gpointer user_data)
{
    GtkWidget           *sidebar;
    GtkWidget           *window;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW (window), WINDOW_TITLE);
    gtk_window_set_default_size(GTK_WINDOW (window), WINDOW_SIZE_X, WINDOW_SIZE_Y);

    sidebar = create_sidebar();
    gtk_container_add(GTK_CONTAINER(window), sidebar);

    gtk_widget_show_all(window);
}
