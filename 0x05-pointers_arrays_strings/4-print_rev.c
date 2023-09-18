#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the input string.
 */
void print_rev(char *s)
{
    int length = strlen(s);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    printf("\n");
}
