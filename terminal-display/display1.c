
#include <stdio.h>
#include <stdlib.h>

void disp_menu() {
    char o1 = '-', o2 = '-', o3 = '>', o4 = '-';
    printf(" %c option 1\n", o1);
    printf(" %c option 2\n", o2);
    printf(" %c option 3\n", o3);
    printf(" %c option 4\n", o4);
}

int main(int argc, char const *argv[]) {
    disp_menu();
    return 0;
}
