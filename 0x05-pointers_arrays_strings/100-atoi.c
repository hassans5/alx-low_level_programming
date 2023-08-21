#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer value
 */
int _atoi(char *s)
{
	int i, sign, result;

	i = 0;
	sign = 1;
	result = 0;

	/* Skip any non-digit characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the digits to an integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		/* Check for signed integer overflow */
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			result = (sign == 1) ? INT_MAX : INT_MIN;
			break;
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}
