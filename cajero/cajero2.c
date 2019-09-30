
#include <stdio.h>

int cajero(double in, double total, int confirm) {
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

    printf("Otro cliente? (0/1): ");
    scanf("%d", &confirm);
    if (confirm == 1) {
        cajero(1, 0, 0);
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    double in = 1;
    double total = 0;
    int confirm = 0;
    cajero(in, total, confirm);
    return 0;
}
