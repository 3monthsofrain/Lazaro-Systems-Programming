#include <stdlib.h>

// Function to return a random character A–Z
char randchar() {
    char alphabet[26];
    int max = 26;

    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }

    int randInd = rand() % max;
    return alphabet[randInd];
}

