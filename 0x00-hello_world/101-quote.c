#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    ssize_t len = 0;
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    len = sizeof(str) - 1; /* Subtract 1 to exclude the null terminator */
    if (write(STDERR_FILENO, str, len) != len)
    {
        return (1);
    }
    return (1);
}
