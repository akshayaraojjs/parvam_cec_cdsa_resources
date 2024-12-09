#include <stdio.h>

int main() {
    int num, reversed = 0, original;
    printf("Enter a number to be reversed: ");
    scanf("%d", &num);
    original = num; // Store the original number
    // Extract digits and construct reversed number
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Construct the reversed number
        num /= 10; // Remove the last digit from num
    }
    printf("Reversed number of %d is: %d\n", original, reversed);
    return 0;
}