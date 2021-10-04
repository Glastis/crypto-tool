//
// Created by glastis on 10/2/21.
//

#include "aes.h"
#include "openssl/evp.h"
#include "../types.h"
#include "../utilities.h"

static void             init_aes_data(unsigned char *key, unsigned char *iv, ustr_t *input, ustr_t *output, aes_data_t *data)
{
    data->key = key;
    data->iv = iv;
    data->input = input;
    data->output = output;
}

static void             aes_cbc_encrypt(aes_data_t *data, const EVP_CIPHER *(*target)())
{
    EVP_CIPHER_CTX      *ctx;
    unsigned int        tmp_len;

    ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit(ctx, target(), data->key, data->iv);
    EVP_EncryptUpdate(ctx, data->output->data, &tmp_len, data->input->data, data->input->len);
    EVP_EncryptFinal(ctx, &data->output->data[tmp_len],&data->output->len);
    EVP_CIPHER_CTX_free(ctx);
}

void                    aes_128_cbc_encrypt(unsigned char *key, unsigned char *iv, ustr_t *input, ustr_t *output)
{
    aes_data_t          data;

    init_aes_data(key, iv, input, output, &data);
    aes_cbc_encrypt(&data, EVP_aes_128_cbc);
}

void                    aes_192_cbc_encrypt(unsigned char *key, unsigned char *iv, ustr_t *input, ustr_t *output)
{
    aes_data_t          data;

    init_aes_data(key, iv, input, output, &data);
    aes_cbc_encrypt(&data, EVP_aes_192_cbc);
}

void                    aes_256_cbc_encrypt(unsigned char *key, unsigned char *iv, ustr_t *input, ustr_t *output)
{
    aes_data_t          data;

    init_aes_data(key, iv, input, output, &data);
    aes_cbc_encrypt(&data, EVP_aes_192_cbc);
}