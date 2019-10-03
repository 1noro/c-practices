
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int h, m, s;
    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {
                printf("%d:%d:%d\n", h, m, s);
            }
        }
    }
    return 0;
}
