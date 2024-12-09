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
    printf("The elements of the array are as follows:\n");
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }
}