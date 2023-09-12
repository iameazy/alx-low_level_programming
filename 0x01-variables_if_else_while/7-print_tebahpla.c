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

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
