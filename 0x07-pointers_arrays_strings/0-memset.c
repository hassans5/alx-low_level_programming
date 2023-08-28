#include "holberton.h"

/**
 * simple_print_buffer - Prints a buffer in a pretty way
 * @buffer: The buffer to be printed
 * @size: The size of the buffer
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {0};
	int i;

	for (i = 0; i < 98; i++)
	{
		buffer[i] = i;
	}
	simple_print_buffer(buffer, 98);
	_memcpy(buffer2, buffer, 98);
	simple_print_buffer(buffer2, 98);
	return (0);
}
