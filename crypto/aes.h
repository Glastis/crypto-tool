//
// Created by glastis on 10/2/21.
//

#ifndef CRYPTO_TOOL_AES_H
#define CRYPTO_TOOL_AES_H

#include "../types.h"

#define AES_256_KEY_SIZE                32u
#define AES_192_KEY_SIZE                24u
#define AES_128_KEY_SIZE                16u

typedef struct                          aes_data
{
    unsigned char                       *key;
    unsigned char                       *iv;
    ustr_t                              *input;
    ustr_t                              *output;
}                                       aes_data_t;

#endif //CRYPTO_TOOL_AES_H
