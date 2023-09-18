#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values of two integers by using pointers.
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of the swap_int function.
 * It initializes two integers, swaps their values using swap_int,
 * and then prints the values before and after the swap.
 *
 * Return: 0 on success.
 */
int main(void)
{
    int x = 5;
    int y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap_int(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return (0);
}
