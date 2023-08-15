#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        _putchar('0'); /* Print the first element */
        for (j = 1; j <= 9; j++)
        {
            _putchar(',');
            _putchar(' ');
            result = i * j;
            if (result < 10)
                _putchar(' '); /* Add extra space for single-digit results */
            else
                _putchar('0' + result / 10); /* Print tens digit of result */
            _putchar('0' + result % 10); /* Print ones digit of result */
        }
        _putchar('\n'); /* Move to the next row */
    }
}
