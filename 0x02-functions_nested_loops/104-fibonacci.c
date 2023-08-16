#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a = 0, b = 1, next_term;
    int i;

    for (i = 0; i < 98; i++)
    {
        printf("%lu", a);
        if (i < 97)
            printf(", ");

        next_term = a + b;
        a = b;
        b = next_term;
    }
    printf("\n");

    return 0;
}
