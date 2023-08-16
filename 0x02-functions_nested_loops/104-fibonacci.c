#include <stdio.h>

/**
 * print_fibonacci - Print the first 98 Fibonacci numbers.
 * @count: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int count)
{
	int a = 1, b = 2, next;
	int i;

	printf("%d, %d", a, b);

	for (i = 2; i < count; ++i)
	{
		next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fibonacci(98);
	return (0);  /* Parentheses are added around the return value */
}
