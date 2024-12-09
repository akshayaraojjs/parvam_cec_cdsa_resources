#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        digit = number % 10; // Extract the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit
    } while (number > 0);
    printf("Sum of digits: %d\n", sum);
    return 0;
}