#include <stdbool.h>
#include "main.h"

/**
 * is_separator - Check if a character is a word separator
 * @c: The character to check
 * Return: true if c is a separator, false otherwise
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (true);
	}
	return (false);
}

/**
 * cap_string - Capitalize all words in a string
 * @s: The input string
 * Return: The modified string
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
		else if (is_separator(s[i]))
		{
			new_word = true;
		}
	}

	return (s);
}
