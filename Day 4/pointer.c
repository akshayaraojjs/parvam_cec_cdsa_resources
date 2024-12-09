#include <stdio.h>
int main() {
    int num = 10;
    int *ptr = &num; // Pointer pointing to num
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value at pointer ptr: %d\n", *ptr);
    *ptr = 20; // Modify the value using pointer
    printf("Updated value of num: %d\n", num);
    return 0;
}