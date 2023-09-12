#include <stdio.h>

int main() {
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                // Convert integers to characters and print
                putchar('0' + i);
                putchar('0' + j);
                putchar('0' + k);

                // Print ", " if not the last combination
                if (!(i == 7 && j == 8 && k == 9)) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
