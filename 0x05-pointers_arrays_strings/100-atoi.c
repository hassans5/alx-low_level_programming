#include "main.h"
#include <limits.h> /* Include this header to access INT_MAX and INT_MIN */

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (result > INT_MAX / 10 ||
				    (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
				{
					return ((sign == -1) ? INT_MIN : INT_MAX);
				}

				result = result * 10 + (s[i] - '0');
				i++;
			}
			break; /* Stop processing after the number */
		}

		i++;
	}

	return (result * sign);
}
