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
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of short: %zu byte(s)\n", sizeof(short));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long: %zu byte(s)\n", sizeof(long));
printf("Size of long long: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of long double: %zu byte(s)\n", sizeof(long double));

// Output for a 32-bit machine
printf("Output for 32-bit machine:\n");
printf("Size of char: 1 byte(s)\n");
printf("Size of short: 2 byte(s)\n");
printf("Size of int: 4 byte(s)\n");
printf("Size of long: 4 byte(s)\n");
printf("Size of long long: 8 byte(s)\n");
printf("Size of float: 4 byte(s)\n");
printf("Size of double: 8 byte(s)\n");
printf("Size of long double: 12 byte(s)\n");

// Output for a 64-bit machine
printf("Output for 64-bit machine:\n");
printf("Size of char: 1 byte(s)\n");
printf("Size of short: 2 byte(s)\n");
printf("Size of int: 4 byte(s)\n");
printf("Size of long: 8 byte(s)\n");
printf("Size of long long: 8 byte(s)\n");
printf("Size of float: 4 byte(s)\n");
printf("Size of double: 8 byte(s)\n");
printf("Size of long double: 16 byte(s)\n");

return (0);
}
