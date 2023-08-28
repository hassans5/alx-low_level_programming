#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed to by @s with
 * the constant byte @b
 * @dest: Pointer to the memory area to be filled
 * @src: The byte to fill the memory area with
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area @s
*/

char *_memset(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
