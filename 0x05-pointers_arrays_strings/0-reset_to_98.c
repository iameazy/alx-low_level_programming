#include <stdio.h>

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
    int num = 42;

    printf("Before: %d\n", num);
    reset_to_98(&num);
    printf("After: %d\n", num);

    return (0);
}

