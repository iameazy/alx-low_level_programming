#include <stdio.h>
#include <string.h>

/**
 * _print_reverse - Prints a string in reverse followed by a new line.
 *
 * @str: The input string to be printed in reverse.
 */
void _print_reverse(char *str)
{
    int length; /* Declare 'int i' here in ISO C90 */
    if (str == NULL)
    {
        return;  /* Handle NULL input */
    }

    length = strlen(str);

    int i;
    for (i = length - 1; i >= 0; i--)

    {
        putchar(str[i]);
    }

    putchar('\n');
}
