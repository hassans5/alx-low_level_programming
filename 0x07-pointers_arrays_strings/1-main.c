#include "main.h"
#include <stdio.h>

int main(void)
{
    char src[10] = "Hello";
    char dest[10];

    printf("Source: %s\n", src);
    printf("Destination before memcpy: %s\n", dest);

    _memcpy(dest, src, 5);

    printf("Destination after memcpy: %s\n", dest);

    return (0);
}
