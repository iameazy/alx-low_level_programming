#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array to be printed.
 * @n: The number of elements to print.
 *
 * Description: Numbers are separated by a comma followed by a space,
 * and a newline is printed at the end.
 */
void print_array(int *a, int n)
{
	int i; /* Declare the loop variable outside the for loop */

	/* Check if n is non-positive and print a newline */
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	printf("%d", a[0]); /* Print the first element without a comma and space */

	/* Loop to print subsequent elements with a comma and space */
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n"); /* Print a newline at the end */
}

