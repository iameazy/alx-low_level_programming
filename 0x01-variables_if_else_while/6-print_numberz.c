#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints single-digit numbers in base 10
 *              starting from 0 without newlines.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0'); /* Print the digit as a character */
	}

	putchar('\n'); /* Print a newline character after all digits */

	return (0);
}
