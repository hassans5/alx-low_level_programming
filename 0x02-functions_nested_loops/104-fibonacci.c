#include <stdio.h>

void add_big(unsigned int a[], unsigned int b[], unsigned int c[], int size) {
    int i;
    int carry = 0;
    
    for (i = 0; i < size; ++i) {
        unsigned int sum = a[i] + b[i] + carry;
        c[i] = sum % 100000; // Store only last 5 digits
        carry = sum / 100000;
    }
}

void print_fibonacci(int n) {
    unsigned int a[400] = {1}, b[400] = {2}, c[400] = {0};
    int size = 1;
    int i, j;
    
    printf("%d, %d", a[0], b[0]);
    
    for (i = 2; i < n; ++i) {
        add_big(a, b, c, size);
        
        if (c[size - 1] > 0) {
            size++;
        }
        
        for (j = size - 1; j >= 0; --j) {
            a[j] = b[j];
            b[j] = c[j];
        }
        
        printf(", %05d", c[size - 1]);
    }
    
    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}
