#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num, int divisor) {
    if (num <= 2) {
        return (num == 2); // 2 is a prime number
    }
    if (num % divisor == 0) {
        return 0; // Not prime if divisible by current divisor
    }
    if (divisor * divisor > num) {
        return 1; // Prime if no divisors found up to sqrt(num)
    }
    return isPrime(num, divisor + 1); // Recursive check for next divisor
}
// Function to print prime numbers in a range
void printPrimes(int start, int end) {
    if (start > end) {
        return; // Base case: stop when start exceeds end
    }
    if (isPrime(start, 2)) {
        printf("%d ", start); // Print if the number is prime
    }
    printPrimes(start + 1, end); // Recursive call for next number
}
int main() {
    int range;
    printf("Enter the range up to which you want prime numbers: ");
    scanf("%d", &range);
    printf("Prime numbers up to %d:\n", range);
    printPrimes(2, range); // Start checking from 2
    printf("\n");
    return 0;
}