#include "main.h"
#include <stdio.h>

/**
 * isLower - Checks if a character is a lowercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * isDelimiter - Checks if a character is a delimiter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a delimiter, 0 otherwise.
 */
int isDelimiter(char c)
{
	char delimiters[] = " \t\n,.!?\"(){}";

	for (int i = 0; delimiters[i]; i++)
	{
		if (c == delimiters[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int capitalize_next = 1;

	for (int i = 0; s[i]; i++)
	{
		if (isDelimiter(s[i]))
			capitalize_next = 1;
		else if (capitalize_next && isLower(s[i]))
		{
			s[i] -= 32;
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (s);
}
