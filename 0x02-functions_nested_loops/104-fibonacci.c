#include <stdio.h>

void print_fibonacci(int count) {
    int a = 1, b = 2, next;

    printf("%d, %d", a, b);
    
    for (int i = 2; i < count; ++i) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    print_fibonacci(98);  // Print the first 98 Fibonacci numbers
    return 0;
}
