#include <stdio.h>
#include "alphabet.h" // Include the header file where print_alphabet is defined

int main(void)
{
    print_alphabet();
    return (0);
}
#ifndef ALPHABET_H
#define ALPHABET_H

void print_alphabet(void);

#endif /* ALPHABET_H */
#include "alphabet.h" // Include the header file where print_alphabet is declared

void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
}

