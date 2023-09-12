#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet
 *              in reverse order, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;

    /* Loop through the lowercase alphabet in reverse order */
    for (c = 'z'; c >= 'a'; c--)
    {
        /* Print the current character using putchar */
        putchar(c);
    }

    /* Print a newline character to end the line */
    putchar('\n');

    return (0);
}
