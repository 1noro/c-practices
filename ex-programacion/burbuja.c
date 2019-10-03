
#include <stdio.h>
#include <stdlib.h>

// printf("%zu\n", sizeof(a));

void print_array(int a[], int a_lenght) {
    printf("[");
    for (int i = 0; i < a_lenght; i++) {
        printf("%d", a[i]);
        if (i != (a_lenght - 1)) {
            printf(", ");
        }
    }
    printf("]\n");
}

// void bubble_order(int *a, int a_lenght) {
void bubble_order(int a[], int a_lenght) {
    int aux = 0;
    for (int i = 0; i < (a_lenght - 1); i++) {
        for (int e = (i + 1); e < a_lenght; e++) {
            if (a[i] > a[e]) {
                aux = a[i];
                a[i] = a[e];
                a[e] = aux;
            }
        }
    }
}

int main(int argc, char const *argv[]) {

    int a[12] = {19, 10, 8, 17, 9, 32, 64, 1, 6, 0, 12, 9};
    int a_lenght = (int) (sizeof(a) / sizeof(int));

    print_array(a, a_lenght);
    bubble_order(a, a_lenght);
    print_array(a, a_lenght);

    return 0;
}
