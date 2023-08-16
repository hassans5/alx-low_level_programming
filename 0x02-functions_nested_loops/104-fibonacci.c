#include <stdio.h>

void print_fibonacci(int n) {
    int a = 1, b = 2;
    int i;
    
    printf("%d, %d", a, b);
    
    for (i = 2; i < n; ++i) {
        int next = a + b;
        printf(", %d", next);
        
        /* Update values for the next iteration */
        a = b;
        b = next;
    }
    
    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}
