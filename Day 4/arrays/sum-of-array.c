#include <stdio.h>
int main() {
    int size;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d array elements:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("The sum of the elements in the array is: %d\n", sum);
    return 0;
}