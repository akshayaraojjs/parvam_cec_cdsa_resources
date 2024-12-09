#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, count = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    while (count < n) {
        if (count == 0) {
            printf("%d ", a); // Print the first term
        } else if (count == 1) {
            printf("%d ", b); // Print the second term
        } else {
            next = a + b; // Calculate the next term
            printf("%d ", next);
            a = b;        // Update a
            b = next;     // Update b
        }
        count++; // Increment the counter
    }
    printf("\n");
    return 0;
}