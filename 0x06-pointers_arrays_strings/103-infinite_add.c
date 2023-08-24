#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result of addition.
 * @size_r: Size of the result buffer.
 * Return: Pointer to the result buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, carry = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i > j)
		k = i;
	else
		k = j;

	i--;
	j--;

	for (; k >= 0; k--)
	{
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;

		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;

		r[k] = (f + s + carry) % 10 + '0';
		carry = (f + s + carry) / 10;

		i--;
		j--;
	}

	if (carry == 1)
		r[0] = carry + '0';

	if (k < 0 && size_r <= (k * -1))
		return NULL;

	for (i = size_r - 1; i >= 0; i--)
		r[i + 1] = r[i];

	r[0] = carry + '0';

	return r;
}
