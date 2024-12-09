#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 99 || num <= -10 && num >= -99)
        printf("The number is a two-digit number.\n");
    else
        printf("The number is NOT a two-digit number.\n");
    return 0;
}
