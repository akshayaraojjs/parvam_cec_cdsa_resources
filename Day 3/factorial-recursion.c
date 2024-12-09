#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1! = 1
    }
    return n * factorial(n - 1); // Recursive step
}
int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}