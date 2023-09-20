#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
    char *original_dest = dest; /* Store the original destination pointer */

    /* Copy characters from src to dest until we reach the null terminator */
    while (*src != '\0')
    {
        *dest = *src; /* Copy a character */
        dest++;       /* Move the destination pointer forward */
        src++;        /* Move the source pointer forward */
    }

    *dest = '\0'; /* Add the null terminator to dest */

    return original_dest; /* Return the original destination pointer */
}
