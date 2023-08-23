#include <stdbool.h>
#include "main.h"

/**
 * isLower - determines whether a character is lowercase
 * @c: character
 * Return: 1 if c is lowercase, 0 otherwise
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether a character is a delimiter
 * @c: character
 * Return: 1 if c is a delimiter, 0 otherwise
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.;!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
*/
char *cap_string(char *s)
{
	bool new_word = true;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ('a' - 'A');
			new_word = false;
		}
		else if (isDelimiter(s[i]))
		{
			new_word = true;
		}
	}

	return (s);
}
