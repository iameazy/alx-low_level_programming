#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to print.
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line.
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
