#include <stdio.h>
#include <limits.h> /* for INT_MAX and INT_MIN */

/**
 * reset_to_98 - Updates the value an integer pointer points to 98
 * @n: Pointer to an integer
 *
 * Description: This function takes a pointer to an integer and updates
 * the value it points to 98.
 */
void reset_to_98(int *n)
{
    *n = 98;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1 = 402;
    int num2 = -4096;
    int max = INT_MAX;
    int min = INT_MIN;

    printf("Before: n = %d\n", num1);
    reset_to_98(&num1);
    printf("Correct output: n = %d\n", num1);

    printf("Before: n = %d\n", num2);
    reset_to_98(&num2);
    printf("Correct output: n = %d\n", num2);

    printf("Correct output: n = %d / ", max);
    reset_to_98(&max);
    printf("n = %d\n", max);

    printf("Correct output: n = %d / ", min);
    reset_to_98(&min);
    printf("n = %d\n", min);

    return (0);
}

