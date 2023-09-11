#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet
 * followed by a newline character using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    /* Print the alphabet using a loop */
    for (; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print a new line */
    putchar('\n');

    return (0);
}
