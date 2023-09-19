#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The input string.
 */
void puts2(char *str)
{
    if (str == NULL)
    {
        return; /* Handle null pointer gracefully */
    }

    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i += 2;
    }
}

