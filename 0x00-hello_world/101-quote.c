#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = 59;

	write(STDERR_FILENO, str, len);
	return (1);
}
