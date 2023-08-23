#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer r
 *
 * Return: pointer to result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	int carry, digit1, digit2, sum;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i > size_r - 1 || j > size_r - 1)
		return (0);
	carry = 0;
	for (k = size_r - 2; k >= 0; k--)
	{
		i--;
		j--;
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[k] = sum + '0';
	}
	r[size_r - 1] = '\0';
	if (carry)
		return (0);
	for (l = 0, m = 0; r[l] != '\0'; l++)
	{
		if (r[l] != '0')
			m = 1;
		if (m)
			break;
	}
	if (!m)
		l++;
	for (n = 0; r[l] != '\0'; l++, n++)
		r[n] = r[l];
	r[n] = '\0';
	return (r);
}
