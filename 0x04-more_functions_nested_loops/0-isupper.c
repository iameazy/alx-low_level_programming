/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Description:
 * This function checks whether the given character is an uppercase letter.
 *
 * Return:
 * 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); /* It's an uppercase character */
	}
	else
	{
		return (0); /* It's not an uppercase character */
	}
}
