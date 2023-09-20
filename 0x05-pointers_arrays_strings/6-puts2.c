#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 *        character.
 * @str: The input string.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
        if (str[i] != '\0') /* Check if the next character exists */
            i++; /* Increment i to skip the next character */
    }

    putchar('\n'); /* Print a new line after all characters are printed */
}

