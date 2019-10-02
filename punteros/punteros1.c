
#include <stdio.h>

void intercambia(int *a, int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

int main(int argc, char const *argv[]) {
    int a=1, b=2;
    printf("a: %d, b: %d\n", a, b);
    intercambia(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    return 0;
}
