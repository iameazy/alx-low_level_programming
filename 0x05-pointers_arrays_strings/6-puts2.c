#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The input string.
 */
void puts2(char *str)
{
    int i = 0; /* Declare the variable at the beginning of the block */

    if (str == NULL)
    {
        return; /* Handle null pointer gracefully */
    }

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i += 2;
    }

    putchar('\n'); /* Add a newline after printing all characters */
}
