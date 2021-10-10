//
// Created by glastis on 10/5/21.
//

#include "sidebar.h"

static void             create_sidebar_stack_add_label(GtkStack *stack, const char *name, const char *value)
{
    GtkWidget           *label;

    label = gtk_label_new(value);
    gtk_stack_add_titled(stack, label, name, value);
}

static GtkStack         *create_sidebar_stack(GtkWidget *grid)
{
    GtkStack            *stack;

    puts(__func__);
    stack = GTK_STACK(gtk_stack_new());
    gtk_stack_set_homogeneous(stack, gtk_true());
    puts(__func__);
    gtk_grid_attach(GTK_GRID(grid), GTK_WIDGET(stack), 1, 0, 1, 1);
    create_sidebar_stack_add_label(stack, "1", "coucou");
    create_sidebar_stack_add_label(stack, "2", "coucoumdr");
    create_sidebar_stack_add_label(stack, "3", "jambon");
    create_sidebar_stack_add_label(stack, "4", "cornichon");
    return stack;
}

GtkWidget               *create_sidebar()
{
    GtkWidget           *sidebar;
    GtkStack            *stack;
    GtkWidget           *grid;

    grid = gtk_grid_new();
    sidebar = gtk_stack_sidebar_new();
    gtk_widget_set_vexpand(sidebar, TRUE);
    stack = create_sidebar_stack(grid);
    gtk_stack_sidebar_set_stack(GTK_STACK_SIDEBAR(sidebar), stack);
    gtk_grid_attach(GTK_GRID(grid), sidebar, 0, 0, 1, 1);
    return grid;
}