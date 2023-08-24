#include "main.h"

/**
 * get_digit - get the digit at a specific position in a string
 * @str: string of digits
 * @pos: position to get digit from (0 is units digit)
 *
 * Return: digit at position pos, or 0 if pos is out of range
 */
int get_digit(char *str, int pos)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (pos >= len)
		return (0);

	return (str[len - pos - 1] - '0');
}

/**
 * add_digits - add two digits with carry
 * @d1: first digit
 * @d2: second digit
 * @carry: carry from previous addition
 *
 * Return: sum of d1, d2, and carry (mod 10)
 */
int add_digits(int d1, int d2, int carry)
{
	return ((d1 + d2 + carry) % 10);
}

/**
 * get_carry - get carry from adding two digits
 * @d1: first digit
 * @d2: second digit
 * @carry: carry from previous addition
 *
 * Return: carry from adding d1, d2, and carry
 */
int get_carry(int d1, int d2, int carry)
{
	return ((d1 + d2 + carry) / 10);
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result buffer
 * @size_r: result buffer size
 *
 * Return: pointer to result buffer, or 0 if result does not fit in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	if (i > j)
		l = i;
	else
		l = j;

	for (k = 0; k <= l; k++)
	{
		f = get_digit(n1, k);
		s = get_digit(n2, k);
		r[l - k] = add_digits(f, s, d) + '0';
		d = get_carry(f, s, d);
	}

	if (d == 1)
	{
		r[l + 1] = '\0';
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	else
	{
		r[l + 1] = '\0';
		while (l-- > 0)
			r[l + 1] = r[l];
	}

	if (l + 2 > size_r)
		return (0);

	return (r);
}
