#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all possible combinations of
 * single-digit numbers separated by a comma and space.
 * The numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    /* Loop through single-digit numbers from 0 to 9 */
    for (i = 0; i < 10; i++)
    {
        /* Print the current number as a character using putchar */
        putchar('0' + i);

        /* Check if we've reached the last number */
        if (i < 9)
        {
            /* Print the separator (", ") using putchar */
            putchar(',');
            putchar(' ');
        }
    }

    /* Print a newline character to end the line */
    putchar('\n');

    return (0);
}
