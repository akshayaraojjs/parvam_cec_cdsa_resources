#include <stdio.h>
int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}
int main() {
    int power, op1;
    printf("Enter any number to find the square & cube:");
    scanf("%d", &op1);
    power = square(op1);
    printf("The square of %d is: %d\n", op1, power);
    power = cube(op1);
    printf("The cube of %d is: %d", op1, power);
}