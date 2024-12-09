#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d is divisible by 3 only.\n", number);
    } else if (number % 5 == 0) {
        printf("%d is divisible by 5 only.\n", number);
    } else {
        printf("%d is not divisible by either 3 or 5.\n", number);
    }
    return 0;
}