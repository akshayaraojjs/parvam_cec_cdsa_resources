#include <stdio.h>
int main() {
    char letter;
    printf("Enter a letter: ");
    scanf(" %c", &letter);
    switch (letter) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is a consonant.\n", letter);
    }
    return 0;
}