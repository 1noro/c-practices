
#include <stdio.h>
#include <stdlib.h>

double change_sign(double a) {
    if (a != 0) {a = a*(-1);}
    return a;
}

int cajero(double in, double total, int confirm, double totald, int nc, double falta) {
    printf("> Nuevo cliente\n");
    nc++;

    while (in != 0) {
        printf("Importe: ");
        scanf("%lf", &in);
        total += in;
    }

    totald += total;
    falta = total;
    printf("Total a pagar: #%.2lfE#\n", total);

    while (falta > 0) {
        printf("Dinero entregado (falta: %.2lf): ", falta);
        scanf("%lf", &in);
        falta -= in;
    }

    printf("Total entregado: %.2lfE, cambio: %.2lfE\n", total+change_sign(falta), change_sign(falta));

    printf("Otro cliente? (0/1): ");
    scanf("%d", &confirm);
    if (confirm == 1) {
        cajero(1, 0, 0, totald, nc, 0);
    }
    if (confirm == 0) {
        printf("Total día: #%.2lfE#, clientes: %d (gasto medio: %.2lfE)\n", totald, nc, totald/nc);
        exit(0);
    }

    return 0;
}

int main(int argc, char const *argv[]) {
    double in = 1, total = 0, totald = 0, falta = 0;
    int confirm = 0, nc = 0;
    cajero(in, total, confirm, totald, nc, falta);
    return 0;
}
