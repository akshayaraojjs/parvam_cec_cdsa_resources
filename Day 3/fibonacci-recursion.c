#include <stdio.h>
// Recursive function to calculate the nth Fibonacci term
int fibonacci(int n) {
    if (n == 0) // Base case: First Fibonacci term
        return 0;
    else if (n == 1) // Base case: Second Fibonacci term
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Call the recursive function
    }
    return 0;
}