#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * @str: The input string to be printed.
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		printf("%s\n", str);
	}
}

