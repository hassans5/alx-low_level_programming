#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - Determines if a character is printable ASCII
 * @n: The character's ASCII value
 *
 * Description: This function checks if a given ASCII value is printable.
 * Returns: 1 if printable, 0 if not printable
 */
int isPrintableASCII(int n)
{
    return (n >= 32 && n <= 126);
}

/**
 * printHexes - Prints hex values for a string within a specified range
 * @b: Pointer to the string
 * @start: Starting position
 * @end: Ending position
 *
 * Description: This function prints the hexadecimal values of a string
 *              within the specified range.
 */
void printHexes(char *b, int start, int end)
{
    int i = 0;
    while (i < 10)
    {
        if (i < end)
            printf("%02x", *(b + start + i));
        else
            printf("  ");

        if (i % 2)
            printf(" ");

        i++;
    }
}

/**
 * printASCII - Prints the ASCII values of a string within a specified range
 * @b: Pointer to the string
 * @start: Starting position
 * @end: Ending position
 *
 * Description: This function prints the ASCII values of a string within
 *              the specified range. Non-printable characters are replaced
 *              with '.'
 */
void printASCII(char *b, int start, int end)
{
    int ch, i = 0;
    while (i < end)
    {
        ch = *(b + i + start);

        if (!isPrintableASCII(ch))
            ch = 46; // ASCII value for '.'

        printf("%c", ch);
        i++;
    }
}

/**
 * print_buffer - Prints a buffer with specific formatting
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 *
 * Description: This function prints the content of a buffer in a specific format.
 *              The output displays the hexadecimal content of the buffer along
 *              with ASCII characters.
 */
void print_buffer(char *b, int size)
{
    int start, end;

    if (size > 0)
    {
        for (start = 0; start < size; start += 10)
        {
            end = (size - start < 10) ? (size - start) : 10;

            printf("%08x: ", start);
            printHexes(b, start, end);
            printASCII(b, start, end);

            printf("\n");
        }
    }
    else
    {
        printf("\n");
    }
}
