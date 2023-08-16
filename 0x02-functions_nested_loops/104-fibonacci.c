#include <stdio.h>
#include <gmp.h>

void print_fibonacci(int count) {
    mpz_t a, b, next;
    mpz_init_set_ui(a, 1);
    mpz_init_set_ui(b, 2);
    mpz_init(next);

    printf("%s, %s", mpz_get_str(NULL, 10, a), mpz_get_str(NULL, 10, b));

    for (int i = 2; i < count; ++i) {
        mpz_add(next, a, b);
        printf(", %s", mpz_get_str(NULL, 10, next));
        mpz_set(a, b);
        mpz_set(b, next);
    }

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(next);
    printf("\n");
}

int main(void) {
    print_fibonacci(98);
    return 0;
}
