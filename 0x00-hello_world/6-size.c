#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program prints the size of various data types on the computer it
 * is compiled and run on. It detects the architecture (32-bit or 64-bit)
 * and provides the appropriate output.
 *
 * Return:
 * 0 to indicate successful execution.
 */
int main(void)
{
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    #if defined(__i386__) || defined(__i686__)
        printf("Architecture: 32-bit\n");
    #elif defined(__x86_64__) || defined(__amd64__)
        printf("Architecture: 64-bit\n");
    #else
        printf("Architecture: Unknown\n");
    #endif

    return 0;
}
