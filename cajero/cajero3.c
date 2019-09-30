
#include <stdio.h>
#include <stdlib.h>

int cajero(double in, double total, int confirm, double totald, int nc) {
    printf("> Nuevo cliente\n");
    nc++;

    while (in != 0) {
        printf("Importe: ");
        scanf("%lf", &in);
        total += in;
    }

    totald += total;
    printf("Total a pagar: %.2lfE\n", total);

    while (in < total) {
        printf("Dinero entregado: ");
        scanf("%lf", &in);
    }

    printf("Entregado: %.2lfE, cambio: %.2lfE\n", in, in - total);

    printf("Otro cliente? (0/1): ");
    scanf("%d", &confirm);
    if (confirm == 1) {
        cajero(1, 0, 0, totald, nc);
    }
    if (confirm == 0) {
        printf("Total día: %.2lfE, clientes: %d (gasto medio: %.2lfE)\n", totald, nc, totald/nc);
        exit(0);
    }

    return 0;
}

int main(int argc, char const *argv[]) {
    double in = 1, total = 0, totald = 0;
    int confirm = 0, nc = 0;
    cajero(in, total, confirm, totald, nc);
    return 0;
}
