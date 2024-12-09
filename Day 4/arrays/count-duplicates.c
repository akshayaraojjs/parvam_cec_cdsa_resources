#include <stdio.h>
int main() {
    int arr[8] = {1, 2, 3, 2, 1, 3, 4, 1};
    int freq[8] = {0};
    int n = 8;

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (freq[i] == 0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 1;
                }
            }
            printf("Element %d occurs %d times.\n", arr[i], count);
        }
    }

    return 0;
}