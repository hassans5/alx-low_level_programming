#include "main.h"

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
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
