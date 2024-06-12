#include "Utils.h"
#include "Http.h"

#include "stdlib.h"
#include "string.h"

// main client
// main server
// main purge


int main(int argc, const char** argv) {
    if (argc != 2) {
        err("not the right amount of arguments");
        exit(EXIT_FAILURE);
    }

    if (strcmp(argv[1], "server") == 0) {
        run_server(6900);
    }
    else if (strcmp(argv[1], "client") == 0) {
        run_client("127.0.0.1", 6900);
    }
    else if (strcmp(argv[1], "purge") == 0) {
        purge_port(6900);
    }
    else {
        err("invalid argument");
        exit(EXIT_FAILURE);
    }
}
