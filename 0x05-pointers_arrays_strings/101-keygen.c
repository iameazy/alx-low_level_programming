#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generatePassword - Generate a random password of a specified length.
 * @password: The buffer to store the generated password.
 * @length: The length of the password to generate.
 *
 * This function generates a random password consisting of letters (both
 * uppercase and lowercase) and digits.
 */
void generatePassword(char *password, int length) {
    /* Define the character set from which the password will be generated. */
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charsetLength = sizeof(charset) - 1;

    /* Seed the random number generator with the current time. */
    srand((unsigned int)time(NULL));

    /* Generate the random password character by character. */
    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLength;
        password[i] = charset[index];
    }

    /* Null-terminate the password string. */
    password[length] = '\0';
}
