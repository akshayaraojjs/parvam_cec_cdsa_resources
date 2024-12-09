#include <stdio.h>
int main() {
    int size, target, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
            printf("The element %d is found in index '%d' of an array.\n", target, i);
        }
    }
    printf("The element %d appears %d times in the array.\n", target, count);
}