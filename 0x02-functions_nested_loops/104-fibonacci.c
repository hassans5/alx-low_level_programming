#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long long int a = 0, b = 1, next_term;
    int i;

    for (i = 0; i < 98; i++)
    {
        printf("%llu, ", a);
        next_term = a + b;
        a = b;
        b = next_term;
    }
    printf("%llu\n", a);

    return 0;
}
