#include <stdio.h>

// Declare the swap_int function prototype
void swap_int(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap_int function to swap the values of x and y
    swap_int(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

