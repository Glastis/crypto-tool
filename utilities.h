//
// Created by glastis on 10/2/21.
//

#ifndef CRYPTO_TOOL_UTILITIES_H
#define CRYPTO_TOOL_UTILITIES_H

#include "types.h"

#define UNUSED(X)                   ((void)(X))

#define BAD_INPUT                   -1
#define MALLOC_FAILED               -2

int                     str_to_unsigned(const char *in, ustr_t *out);

#endif //CRYPTO_TOOL_UTILITIES_H
