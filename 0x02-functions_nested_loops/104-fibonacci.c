#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 1, b = 2, next_term;
    int i;

    printf("%lu, %lu", a, b);
    for (i = 2; i < 98; i++)
    {
        next_term = a + b;
        printf(", %lu", next_term);
        a = b;
        b = next_term;
    }
    printf("\n");

    return 0;
}
