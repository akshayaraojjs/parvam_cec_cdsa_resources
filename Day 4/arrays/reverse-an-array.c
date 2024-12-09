#include <stdio.h>
int main() {
    // Initialize the array with predefined values
    int size;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d array elements:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\nReversed array:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }
    return 0;
}