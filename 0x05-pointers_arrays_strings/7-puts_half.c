#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string followed by a newline.
 * @str: The input string.
 *
 * Description: This function calculates and prints the second half of the
 * input string. If the number of characters is odd, it prints the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = strlen(str);

	/* Calculate the starting index for the second half */
	int start_index = (length - 1) / 2 + 1;

	int i; /* Declare loop variable outside of the loop */

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	/* Print a new line */
	putchar('\n');
}

