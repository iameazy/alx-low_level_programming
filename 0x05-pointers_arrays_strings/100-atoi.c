#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int digitEncountered = 0;

    /* Iterate through the characters in the string */
    for (int i = 0; s[i] != '\0'; i++)
    {
        /* Handle spaces */
        if (s[i] == ' ')
            continue;

        /* Handle signs */
        if (s[i] == '-')
            sign = -1;
        else if (s[i] == '+')
            sign = 1;
        
        /* Handle digits */
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            digitEncountered = 1;
        }
        else if (digitEncountered)
        {
            /* If a non-digit is encountered after digits, break */
            break;
        }
    }

    return result * sign;
}

