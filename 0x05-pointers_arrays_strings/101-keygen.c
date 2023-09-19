#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_random_password - Generates a random valid password.
 *
 * This function generates a random valid password containing lowercase
 * letters and digits.
 *
 * Return: A dynamically allocated string containing the password.
 */
char *generate_random_password() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    const int charset_length = sizeof(charset) - 1;

    srand(time(NULL));

    char *password = (char *)malloc((PASSWORD_LENGTH + 1) * sizeof(char)); // +1 for the null terminator

    if (password == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % charset_length;
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}
