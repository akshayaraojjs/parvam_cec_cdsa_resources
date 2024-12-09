#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isalpha(ch)) {
        printf("The character is an alphabet.\n");
    } else if (isdigit(ch)) {
        printf("The character is a number.\n");
    } else {
        printf("The character is neither an alphabet nor a number.\n");
    }
    return 0;
}