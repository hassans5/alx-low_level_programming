#include <stdio.h>

void print_fibonacci(int n) {
    unsigned long long a = 1, b = 2;
    
    printf("%llu, %llu", a, b);
    
    for (int i = 2; i < n; ++i) {
        unsigned long long next = a + b;
        printf(", %llu", next);
        
        a = b;
        b = next;
    }
    
    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}
