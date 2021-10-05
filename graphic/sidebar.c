//
// Created by glastis on 10/5/21.
//

#include "sidebar.h"

static void             create_sidebar_stack_add_label(GtkWidget *stack, const char *name, const char *value)
{
    GtkWidget           *label;

    label = gtk_label_new_with_mnemonic(value);
    gtk_stack_add_titled(GTK_STACK(stack), label, name, value);
}

static GtkWidget        *create_sidebar_stack(GtkWidget *grid)
{
    GtkWidget           *stack;

    stack = gtk_stack_new();
    gtk_stack_set_homogeneous(GTK_STACK(stack), gtk_true());
    gtk_grid_attach(GTK_GRID(grid), stack, 1, 0, 1, 1);
    create_sidebar_stack_add_label(stack, "1", "coucou");
    create_sidebar_stack_add_label(stack, "2", "coucoumdr");
    create_sidebar_stack_add_label(stack, "3", "jambon");
    create_sidebar_stack_add_label(stack, "4", "cornichon");
    return grid;
}

GtkWidget               *create_sidebar()
{
    GtkWidget           *sidebar;
    GtkWidget           *stack;
    GtkWidget           *grid;

    grid = gtk_grid_new();
    sidebar = gtk_stack_sidebar_new();
    stack = create_sidebar_stack(grid);
    gtk_stack_sidebar_set_stack(GTK_STACK_SIDEBAR(sidebar), GTK_STACK(stack));
    gtk_grid_attach(GTK_GRID(grid), sidebar, 0, 0, 1, 1);
    return grid;
}