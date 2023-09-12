#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Description: Numbers must be separated by ', ' followed by a space.
 * The three digits must be different.
 * Only the smallest combination of three digits is printed.
 * Numbers are printed in ascending order with three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                /* Convert integers to characters and print */
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);

                /* Print ", " if not the last combination */
                if (!(i == 7 && j == 8 && k == 9))
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
