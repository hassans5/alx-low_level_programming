#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i;
    int j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;
            int hundreds = result / 100;
            int tens = (result / 10) % 10;
            int ones = result % 10;

            if (j != 0)
                _putchar(',');

            if (result < 10)
            {
                _putchar(' ');
                _putchar(' ');
            }
            else if (result >= 10 && result < 100)
            {
                _putchar(' ');
            }

            _putchar(hundreds + '0');
            _putchar(tens + '0');
            _putchar(ones + '0');
        }
        _putchar('\n');
    }
}
