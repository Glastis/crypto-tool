#include <gtk/gtk.h>

static void             main_window(GtkApplication* app, gpointer user_data)
{
    GtkWidget           *sidebar;
    GtkWidget           *window;

    window = gtk_application_window_new(app);
    gtk_window_set_title (GTK_WINDOW (window), "Window");
    gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

    sidebar = gtk_stack_sidebar_new();
    gtk_widget_set_parent(sidebar, window);

    gtk_widget_show_all (window);
}

int                     main(int argc, char **argv)
{
    GtkApplication      *app;
    int                 status;

    app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK (main_window), NULL);
    status = g_application_run(G_APPLICATION (app), argc, argv);
    g_object_unref(app);
    return status;
}
