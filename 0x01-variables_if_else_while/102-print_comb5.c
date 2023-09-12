#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * ranging from 00 to 99, excluding duplicates. Combinations are separated
 * by commas and spaces. Numbers are printed with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            /* Print the first two-digit number */
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');

            /* Print the second two-digit number */
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            /* Print a comma and space if not the last combination */
            if (i != 99 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n'); /* Print a newline character at the end */
    return (0);
}
