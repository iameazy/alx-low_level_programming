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
        printf("%c", str[i]);
        i += 2;
    }

    printf("\n"); /* Add a newline after printing all characters */
}

int main(void)
{
    char str1[] = "Holberton!";
    char str2[] = "Lorem ipsum...";
    char str3[] = "";

    puts2(str1); /* Should print "Hlbtn!\n" */
    puts2(str2); /* Should print "Lmipu...\n" */
    puts2(str3); /* Should print "\n" */

    return (0);
}

