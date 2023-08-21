#include <limits.h>

int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    /* Skip any non-digit characters */
    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* Convert the string of digits to an integer */
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
    {
        /* Check for potential overflow */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
        {
            result = (sign == 1) ? INT_MAX : INT_MIN;
            break;
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }

    /* Return the result with the appropriate sign */
    return (result * sign);
}
