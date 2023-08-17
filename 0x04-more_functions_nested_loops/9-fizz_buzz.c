#include "main.h"

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			print_str("FizzBuzz ");
		else if (i % 3 == 0)
			print_str("Fizz ");
		else if (i % 5 == 0)
			print_str("Buzz ");
		else
			print_int(i);
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}

/**
 * print_str - Prints a string
 * @str: The string to print
 */
void print_str(char *str)
{
	while (*str)
		_putchar(*str++);
}

/**
 * print_int - Prints an integer
 * @n: The integer to print
 */
void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_int(n / 10);
	_putchar(n % 10 + '0');
}
