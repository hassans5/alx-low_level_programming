#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	/* Calculate the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Adjust the length if it is odd */
	if (len % 2 == 1)
		len--;

	/* Print every other character */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
