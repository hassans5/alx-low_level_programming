#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= n / 2; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
