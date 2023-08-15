#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates the sum of even-valued terms
 *              in the Fibonacci sequence not exceeding 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int prev1 = 1, prev2 = 2, current = 0, sum = 2;

while (current <= 4000000)
{
current = prev1 + prev2;
if (current % 2 == 0)
sum += current;
prev1 = prev2;
prev2 = current;
}

printf("%ld\n", sum);

return (0);
}
