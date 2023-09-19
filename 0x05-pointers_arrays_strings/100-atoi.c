#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Default sign is positive */

	/* Skip leading non-numeric characters */
	while (*s && (*s < '0' || *s > '9') && (*s != '-' && *s != '+'))
		s++;

	/* Check for sign (+ or -) */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Convert the string to an integer */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for integer overflow */
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}