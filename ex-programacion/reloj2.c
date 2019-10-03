
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int h, m, s;
    int h1, m1, s1;

    printf("Horas: "); scanf("%d", &h1);
    printf("Minutos: "); scanf("%d", &m1);
    printf("Segundos: "); scanf("%d", &s1);

    for (int h = h1; h < 24; h++) {
        for (int m = m1; m < 60; m++) {
            for (int s = s1; s < 60; s++) {
                printf("%2.d:%2.d:%2.d\n", h, m, s);
            }
            s1 = 0;
        }
        m1 = 0;
    }
    h1 = 0;
    return 0;
}
