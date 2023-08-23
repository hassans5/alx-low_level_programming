#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	int i;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		i = 0;
		while (alpha[i])
		{
			if (*s == alpha[i])
			{
				*s = rot13[i];
				break;
			}
			i++;
		}
		s++;
	}

	return (ptr);
}
