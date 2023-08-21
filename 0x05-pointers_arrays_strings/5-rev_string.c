#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i; /* Declare the loop variable here */

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Swap characters from start and end towards the middle */
	for (i = 0; i < length / 2; i++) /* Use the loop variable here */
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
