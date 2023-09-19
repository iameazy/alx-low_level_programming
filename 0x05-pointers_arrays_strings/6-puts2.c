#include <stdio.h>

/**
 * puts2 - Prints every other character of a string without a newline between them.
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
        printf("%c", str[i]);
        i += 2;
    }

    printf("\n"); // Add a newline after printing all characters
}

