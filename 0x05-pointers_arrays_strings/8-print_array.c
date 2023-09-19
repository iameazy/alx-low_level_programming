#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to print.
 *
 * Description: This function prints the first n elements of the array 'a' separated
 * by a comma and space, followed by a new line.
 */
void print_array(int *a, int n)
{
    int i; /* Declare loop variable outside of the loop */

    if (n <= 0)
    {
        printf("\n");  /* Print a newline for an empty array or invalid input */
        return;
    }

    for (i = 0; i < n - 1; i++)
    {
        printf("%d, ", a[i]);
    }

    printf("%d\n", a[n - 1]);  /* Print the last element followed by a newline */
}

