#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 0, b = 1, next_term;
    int i;

    printf("%lu, %lu, ", a, b);
    for (i = 0; i < 96; i++)
    {
        next_term = a + b;
        printf("%lu", next_term);
        a = b;
        b = next_term;
        if (i != 95)
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}
