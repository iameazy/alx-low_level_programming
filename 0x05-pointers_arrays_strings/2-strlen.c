#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    /* Loop through the characters of the string until null terminator is reached */
    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char myString[] = "Hello, World!";
    int length = _strlen(myString);

    printf("The length of the string is: %d\n", length);

    return (0);
}

