// curioso

#include <stdio.h>
#include <limits.h> // para definir el CHAR_BIT

int main(int argc, char const *argv[]) {
    int a = 1;
    printf("## a (int)\n");
    printf("a:  '%d'\n", a);
    printf("&a: '%X' (%d)\n", &a, &a);
    printf("sizeof(a): '%zu'\n", sizeof(a));

    char b = 'a';
    printf("## b (char)\n");
    printf("b:  '%c'\n", b);
    printf("&b: '%X' (%d)\n", &b, &b);
    printf("sizeof(b): '%zu'\n", sizeof(b));
    printf("CHAR_BIT:  '%d' (número de bits en un char)\n", CHAR_BIT);

    char *c = "hola";
    printf("## c (*string)\n");
    printf("c:  '%s'\n", c);
    printf("&c: '%X' (%d)\n", &c, &c);
    printf("sizeof(c): '%zu'\n", sizeof(c));

    char d[] = "pola";
    printf("## d (string[])\n");
    printf("d:  '%s'\n", d);
    printf("&d: '%X' (%d)\n", &d, &d);
    printf("sizeof(d): '%zu'\n", sizeof(d));

    char e[4] = "mola";
    printf("## e (string[4])\n");
    printf("e:  '%s'\n", e);
    printf("&e: '%X' (%d)\n", &e, &e);
    printf("sizeof(e): '%zu'\n", sizeof(e));

    char f[5] = "cola";
    printf("## f (string[5])\n");
    printf("f:  '%s'\n", f);
    printf("&f: '%X' (%d)\n", &f, &f);
    printf("sizeof(f): '%zu'\n", sizeof(f));

    return 0;
}
