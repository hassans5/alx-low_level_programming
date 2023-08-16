#include <stdio.h>

void fibonacci_sequence() {
    unsigned int a = 1, b = 2;
    unsigned int count = 0;

    while (count < 98) {
        printf("%u, ", a);
        unsigned int temp = b;
        b = a + b;
        a = temp;
        count++;
    }

    printf("\n");
}

int main() {
    fibonacci_sequence();
    return 0;
}
