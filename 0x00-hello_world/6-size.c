#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the size of various data types on the computer
 * it is compiled and run on.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of short: %lu byte(s)\n", sizeof(short));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of long: %lu byte(s)\n", sizeof(long));
    printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));

    return (0);
}
Size of char: 1 byte(s)
Size of short: 2 byte(s)
Size of int: 4 byte(s)
Size of long: 4 byte(s)
Size of long long: 8 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
Size of long double: 12 byte(s)
Size of char: 1 byte(s)
Size of short: 2 byte(s)
Size of int: 4 byte(s)
Size of long: 8 byte(s)
Size of long long: 8 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
Size of long double: 16 byte(s)
