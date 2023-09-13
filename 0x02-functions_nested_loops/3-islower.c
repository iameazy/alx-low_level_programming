#include <ctype.h>

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (islower(c))
    {
        return 1; /* c is lowercase */
    }
    else
    {
        return 0; /* c is not lowercase */
    }
}
