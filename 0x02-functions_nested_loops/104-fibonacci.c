#include <stdio.h>

void fibonacci_sequence() {
    unsigned int a = 1, b = 2;
    unsigned int temp;
    unsigned int count = 0;

    while (count < 98) {
        printf("%u, ", a);
        temp = b;
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
