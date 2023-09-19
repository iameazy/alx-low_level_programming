#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest, including the null terminator.
 *
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string to be copied.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, const char *src)
{
	char *original_dest = dest; /* Store the original destination pointer */

	/* Copy characters from src to dest until the null terminator is encountered */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add the null terminator at the end of dest */
	*dest = '\0';

	return (original_dest); /* Return the original destination pointer */
}
