#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Loop through the numbers from 0 to 15 (hexadecimal) */
	for (i = 0; i < 16; i++)
	{
		char hexDigit;

		/* Convert the integer to a lowercase hexadecimal character */
		if (i < 10)
			hexDigit = '0' + i;
		else
			hexDigit = 'a' + i - 10;

		/* Use putchar to print the character */
		putchar(hexDigit);
	}

	/* Print a newline character */
	putchar('\n');

	return (0);
}
