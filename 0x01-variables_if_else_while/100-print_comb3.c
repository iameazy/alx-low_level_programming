#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of two digits, separated by a comma and space. It ensures that
 * the two digits are different and prints only the smallest combination.
 * The numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');
            putchar(j + '0');

            /* Check if this is not the last combination */
            if (i != 8 || j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}
