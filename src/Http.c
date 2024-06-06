#include "Http.h"
#include "stdlib.h"
#include "netinet/in.h"

int run_server() {
    int server_id;
    struct sockaddr_in server_addr;
    
    if ((server_id = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        ("socket initialization failed");
        exit()
    }


    return SERVER_SUCCESS;
}
