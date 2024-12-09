#include <stdio.h>
#include <math.h>
int main() {
    int num, root;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Negative numbers cannot be perfect squares.\n");
    else {
        root = sqrt(num);
        if (root * root == num)
            printf("The number is a perfect square.\n");
        else
            printf("The number is NOT a perfect square.\n");
    }
    return 0;
}
