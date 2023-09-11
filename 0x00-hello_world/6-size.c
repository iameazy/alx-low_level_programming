#include <stdio.h>

/* main - Entry point of the program
 *
 * This program prints the size of various data types on the computer
 * it is compiled and run on.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of a short: %zu byte(s)\n", sizeof(short));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long: %zu byte(s)\n", sizeof(long));
    printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));
    printf("Size of a double: %zu byte(s)\n", sizeof(double));
    printf("Size of a long double: %zu byte(s)\n", sizeof(long double));

    /* Output for a 32-bit machine */
    printf("Output for 32-bit machine:\n");
    printf("Size of a char: 1 byte(s)\n");
    printf("Size of a short: 2 byte(s)\n");
    printf("Size of an int: 4 byte(s)\n");
    printf("Size of a long: 4 byte(s)\n");
    printf("Size of a long long: 8 byte(s)\n");
    printf("Size of a float: 4 byte(s)\n");
    printf("Size of a double: 8 byte(s)\n");
    printf("Size of a long double: 12 byte(s)\n");

    /* Output for a 64-bit machine */
    printf("Output for 64-bit machine:\n");
    printf("Size of a char: 1 byte(s)\n");
    printf("Size of a short: 2 byte(s)\n");
    printf("Size of an int: 4 byte(s)\n");
    printf("Size of a long: 8 byte(s)\n");
    printf("Size of a long long: 8 byte(s)\n");
    printf("Size of a float: 4 byte(s)\n");
    printf("Size of a double: 8 byte(s)\n");
    printf("Size of a long double: 16 byte(s)\n");

    return (0);
}
