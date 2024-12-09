#include <stdio.h>
int main() {
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        number /= 10; // Remove the last digit
        count++;      // Increment digit count
    } while (number > 0);
    printf("Number of digits: %d\n", count);
    return 0;
}