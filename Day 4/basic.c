#include <stdio.h>
int main() {
    int num;
    int* ptr = &num;
    printf("Enter any number:");
    scanf("%d", &num);
    printf("The value of number is: %d\n", num);
    printf("The size of number is %d bytes.\n", sizeof(num));
    printf("The address of number is: %p\n", &num);
    printf("The address of ptr is: %p\n", ptr);
    printf("The value of ptr is: %d\n", *ptr);
    printf("The size of ptr is %d bytes.\n", sizeof(ptr));
    *ptr = 30;
    printf("The updated value of number is: %d\n", num);
}