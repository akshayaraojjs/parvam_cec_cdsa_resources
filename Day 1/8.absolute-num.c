#include <stdio.h>
int main() {
    int number, absoluteValue;
    printf("Enter a number: ");
    scanf("%d", &number);
    absoluteValue = (number < 0) ? -number : number;
    printf("The absolute value of %d is %d.\n", number, absoluteValue);
    return 0;
}