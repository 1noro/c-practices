
#include <stdio.h>

int main(int argc, char const *argv[]) {
    double in = 1;
    double total = 0;

    while (in != 0) {
        printf("Importe: ");
        scanf("%lf", &in);
        total = total + in;
    }

    printf("Total a pagar: %.2lfE\n", total);

    while (in < total) {
        printf("Dinero entregado: ");
        scanf("%lf", &in);
    }

    printf("Entregado: %.2lfE, cambio: %.2lfE\n", in, in - total);

    return 0;
}
