#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Description: This program uses two nested loops to generate all possible
 * combinations of two digits. The two digits must be different, and the
 * smallest combination is printed first. The digits are separated by a comma
 * and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
