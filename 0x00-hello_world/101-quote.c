#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a specific message to the standard error
 * and returns 1.
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);
	ssize_t bytes_written;

	bytes_written = write(STDERR_FILENO, message, len);

	if (bytes_written != len)
	{
		return (1);
	}

	return (1);
}
