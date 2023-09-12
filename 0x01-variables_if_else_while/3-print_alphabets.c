#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase
 * and then in uppercase, followed by a new line, using the putchar function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase, uppercase;

	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}
