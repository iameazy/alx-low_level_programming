#include <stdio.h>
#include <string.h>

/**
 * _print_reverse - Prints a string in reverse followed by a new line.
 *
 * @str: The input string to be printed in reverse.
 */
void _print_reverse(char *s) {
    int length = 0;
    int i; /* Move the declaration here */
    while (s[length] != '\0') {
        length++;
    }

    for (i = length - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    putchar('\n');
}

