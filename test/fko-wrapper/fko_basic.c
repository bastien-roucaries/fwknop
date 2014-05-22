#include <stdio.h>
#include <stdlib.h>
#include "fko.h"

int main(void) {
    fko_ctx_t       ctx = NULL;
    int             res = 0;

    res = fko_new(&ctx);

    if (res == FKO_SUCCESS)
        printf("[+] fko_new(): %s\n", fko_errstr(res));
    else
        printf("[-] fko_new(): %s\n", fko_errstr(res));

    fko_destroy(ctx);

    return 0;
}
