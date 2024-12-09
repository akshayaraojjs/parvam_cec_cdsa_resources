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
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The smallest element of the array is: %d\n", min);
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element of the array is: %d", max);
}
