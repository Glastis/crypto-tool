//
// Created by glastis on 10/2/21.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"
#include "types.h"

int                     str_to_unsigned(const char *in, ustr_t *out)
{
    char                buff[3];
    unsigned int        i;
    unsigned int        in_len;

    in_len = strlen(in);
    if (in_len % 2)
    {
#ifdef VERBOSE
        fprintf(stderr, "ERROR: str_to_unsigned: input should be even, odd found. (%d chars)\n", in_len);
#endif
        return BAD_INPUT;
    }
    if (!(out->data = malloc(in_len >> 1)))
    {
        return MALLOC_FAILED;
    }
    out->len = in_len >> 1;
    buff[2] = '\0';
    i = 0;
    while (in[i] && in[i + 1])
    {
        buff[0] = in[i];
        buff[1] = in[i + 1];
        out->data[i] = (unsigned char) strtol(buff, NULL, 16);
        ++i;
    }
    return (int)i;
}


