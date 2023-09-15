/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Description:
 * This function checks whether the given character is a digit (0 through 9).
 *
 * Return:
 * 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1); /* It's a digit */
	}
	else
	{
		return (0); /* It's not a digit */
	}
}
