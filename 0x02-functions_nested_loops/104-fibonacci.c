#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a = 1, b = 2, c;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
