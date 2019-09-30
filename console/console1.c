
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK          0
#define NO_IN       1
#define IN_TOO_LONG 2

static int getLine (char *prmpt, char *buff, size_t sz) {
    int ch, extra;

    // Get line with buffer overrun protection.
    if (prmpt != NULL) {
        printf ("%s", prmpt);
        fflush (stdout);
    }
    if (fgets (buff, sz, stdin) == NULL)
        return NO_IN;

    // If it was too long, there'll be no newline. In that case, we flush
    // to end of line so that excess doesn't affect the next call.
    if (buff[strlen(buff)-1] != '\n') {
        extra = 0;
        while (((ch = getchar()) != '\n') && (ch != EOF))
            extra = 1;
        return (extra == 1) ? IN_TOO_LONG : OK;
    }

    // Otherwise remove newline and give string back to caller.
    buff[strlen(buff)-1] = '\0';
    return OK;
}

int main(int argc, char const *argv[]) {
    int rc;
    char buff[10];

    rc = getLine ("Enter string> ", buff, sizeof(buff));
    if (rc == NO_IN) {
        // Extra NL since my system doesn't output that on EOF.
        printf ("\nNo input\n");
        return 1;
    }

    if (rc == IN_TOO_LONG) {
        printf ("Input too long [%s]\n", buff);
        return 1;
    }

    printf ("OK [%s]\n", buff);

    return 0;
}
