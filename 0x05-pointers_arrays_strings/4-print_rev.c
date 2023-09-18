#include <stdio.h>
#include <string.h>

/**
 * _print_reverse - Prints a string in reverse followed by a new line.
 *
 * @str: The input string to be printed in reverse.
 */
void _print_reverse(char *str)
{
    if (str == NULL)
    {
        return;  /* Handle NULL input */
    }

    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }

    putchar('\n');
}
