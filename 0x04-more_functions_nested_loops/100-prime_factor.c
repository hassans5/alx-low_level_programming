#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int max_prime = 2;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (unsigned long int i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		max_prime = num;
	}

	printf("%lu\n", max_prime);

	return (0);
}
