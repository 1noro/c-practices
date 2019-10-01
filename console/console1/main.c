
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK          0
#define NO_IN       1
#define IN_TOO_LONG 2

#define CSIZE       20

// my .h files
#include "gen_utils.h"

int control_in(int rc, char *buff) {
    if (rc == NO_IN) {
        // Extra NL since my system doesn't output that on EOF.
        printf("\nNo input\n");
        return 1;
    }

    if (rc == IN_TOO_LONG) {
        printf ("Input too long [%s]\n", buff);
        return 1;
    }

    printf ("OK [%s]\n", buff);
    if (strcmp(buff, "exit") == 0) return 2;
    return 0;
}

int main(int argc, char const *argv[]) {
    int rc = 0, err = 0;
    char buff[CSIZE] = "";

    while (1) {
        rc = getLine ("> ", buff, sizeof(buff));
        err = control_in(rc, buff);
        if (err == 2) break;
    }

    return 0;
}
