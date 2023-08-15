#include "main.h"
#include <unistd.h>

/**
 * print_times_table - Prints the n times table
 * @n: The number for which times table is to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;

if (j == 0)
_putchar(result + '0');
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
_putchar(' ');
if (result < 100)
_putchar(' ');
_putchar(result / 100 + '0');
_putchar(result / 10 % 10 + '0');
_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
}

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
