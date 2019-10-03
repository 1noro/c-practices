
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, m, d;
    int out;
    out = 0;

    printf("Año: "); scanf("%d", &a);
    printf("Mes: "); scanf("%d", &m);
    printf("Día: "); scanf("%d", &d);

    if ((a >= 1) && (a <= 2999) && (m >= 1) && (m <= 12) && (d >= 1)) {
        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31) {
            out = 1;
        }
        if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30) {
            out = 1;
        }
        if (m == 2) {
            if ( (a%4 == 0) && ((a%100 != 0) || (a%400 == 0)) ) {
                if (d <= 29) {
                    out = 1;
                }
            } else {
                if (d <= 28) {
                    out = 1;
                }
            }
        }
    }

    if (out == 1) {
        printf("[ OK ] %d-%d-%d es una fecha válida.\n", a, m, d);
    } else {
        printf("[FAIL] %d-%d-%d no es una fecha válida.\n", a, m, d);
    }

    return 0;
}
