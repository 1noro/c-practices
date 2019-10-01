
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK          0
#define NO_IN       1
#define IN_TOO_LONG 2

#define CSIZE       20

// my .h files
#include "gen_utils.h"

int control_in(int err, char *buff) {
    if (err == NO_IN) {
        // Extra NL since my system doesn't output that on EOF.
        printf("\nNo input\n");
        return 1;
    }

    if (err == IN_TOO_LONG) {
        printf ("Input too long [%s]\n", buff);
        return 1;
    }

    // printf ("OK [%s]\n", buff);
    return 0;
}

int cmd_parser(char *buff) {
    if (strcmp(buff, "exit") == 0) return 2;
    if (strcmp(buff, "hello") == 0) {
        printf("Hy, nice to see you.\n");
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    int err = 0;
    char prompt[] = "> ";
    char buff[CSIZE] = "";

    while (1) {
        err = getLine (prompt, buff, sizeof(buff));
        err = control_in(err, buff);
        if (err == 0) err = cmd_parser(buff);
        
        // exit cmd
        if (err == 2) {
            printf("Bye (~‾▿‾)~\n");
            break;
        }
    }

    return 0;
}
