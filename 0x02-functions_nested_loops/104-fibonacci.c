#include <stdio.h>

void add_big(unsigned int a[], unsigned int b[], unsigned int c[], int size) {
    int carry = 0;
    for (int i = 0; i < size; ++i) {
        unsigned int sum = a[i] + b[i] + carry;
        c[i] = sum % 1000000000; // Store only last 9 digits
        carry = sum / 1000000000;
    }
}

void print_fibonacci(int n) {
    unsigned int a[200] = {1}, b[200] = {2}, c[200] = {0};
    int size = 1;
    
    printf("%d, %d", a[0], b[0]);
    
    for (int i = 2; i < n; ++i) {
        add_big(a, b, c, size);
        
        if (c[size - 1] > 0) {
            size++;
        }
        
        for (int j = size - 1; j >= 0; --j) {
            a[j] = b[j];
            b[j] = c[j];
        }
        
        printf(", %d", c[size - 1]);
    }
    
    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}
