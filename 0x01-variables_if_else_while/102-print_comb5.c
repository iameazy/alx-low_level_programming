#include <stdio.h>

int main() {
    for (int i = 0; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {
            // Print the first two-digit number
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');

            // Print the second two-digit number
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            // Print a comma and space if not the last combination
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
