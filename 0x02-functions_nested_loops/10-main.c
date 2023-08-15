#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

n = add(89, 9);
printf("%d\n", n);

n = add(0, 9);
printf("%d\n", n);

n = add(0, 0);
printf("%d\n", n);

n = add(89, 0);
printf("%d\n", n);

n = add(-89, 12);
printf("%d\n", n);

n = add(12, 12);
printf("%d\n", n);

n = add(-89, -98);
printf("%d\n", n);

return (0);
}
