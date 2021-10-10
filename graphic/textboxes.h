//
// Created by glastis on 10-Oct-21.
//

#ifndef CRYPTO_TOOL_TEXTBOXES_H
#define CRYPTO_TOOL_TEXTBOXES_H

#include <gtk/gtk.h>

#define                 TEXTBOXES_MARGIN    15u
#define                 TEXT_MARGIN         10u

GtkGrid                 *create_textarea_counted(const char *default_value);

#endif //CRYPTO_TOOL_TEXTBOXES_H
