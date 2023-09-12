#include <stdio.h>

int main() {
    // Loop through single-digit numbers from 0 to 9
    for (int i = 0; i < 10; i++) {
        // Print the current number as a character using putchar
        putchar('0' + i);

        // Check if we've reached the last number
        if (i < 9) {
            // Print the separator (", ") using putchar
            putchar(',');
            putchar(' ');
        }
    }

    // Print a newline character to end the line
    putchar('\n');

    return 0;
}
