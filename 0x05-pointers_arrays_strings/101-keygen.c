#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(char *password, int length) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    const int charsetLength = sizeof(charset) - 1;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLength;
        password[i] = charset[index];
    }

    password[length] = '\0';
}

int main() {
    int passwordLength = 12; // You can adjust this as needed
    char password[passwordLength + 1];

    generatePassword(password, passwordLength);

    printf("%s", password);

    return 0;
}

