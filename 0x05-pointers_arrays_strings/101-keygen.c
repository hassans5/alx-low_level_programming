#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int sum, r;

	sum = 0;
	srand(time(NULL));
	while (sum < 2772)
	{
		r = (rand() % 127) + 1; /* avoid generating null bytes */
		if (sum + r > 2772)
			break;
		printf("%c", r);
		sum += r;
	}
	printf("%c", 2772 - sum);
	return (0);
}
