#pragma once
#include "stdio.h"
#include "openssl/ssl.h"

#define log(msg) printf("[.] log: %s\n", msg)
#define warn(msg) printf("[?] warn: %s\n", msg)
#define err(msg) printf("[!] err: %s\n", msg)

#define EXTRA_SSL_ERROR_INFO

void ssl_std_err(const SSL* ssl, int ret_val, const char* err_msg);
