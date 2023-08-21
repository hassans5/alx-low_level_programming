#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	/* Calculate the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Calculate the starting index */
	n = (len + 1) / 2;

	/* Print the second half of the string */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
