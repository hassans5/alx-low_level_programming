#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a = 1, b = 2, c;
int count;

printf("%lu, %lu", a, b);

for (count = 2; count < 98; count++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}

printf("\n");

return (0);
}
