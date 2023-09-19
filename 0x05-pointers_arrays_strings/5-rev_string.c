#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 *
 * Description: This function reverses the given string in place.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		/* Swap characters at the start and end positions */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the start and end pointers toward each other */
		start++;
		end--;
	}
}
