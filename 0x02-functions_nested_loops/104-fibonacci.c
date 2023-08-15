#include <stdio.h>

int main(void) {
    unsigned long int a = 1, b = 2, c;
    int i;

    printf("%lu, %lu, ", a, b);

    for (i = 3; i <= 98; i++) {
        c = a + b;
        printf("%lu", c);
        if (i < 98) {
            printf(", ");
        }
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
