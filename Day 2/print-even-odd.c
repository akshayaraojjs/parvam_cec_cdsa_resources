#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Even numbers from 0 to %d are as follows:\n", num);
    for (int i = 1; i <= num; i++) {
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    printf("Odd numbers from 0 to %d are as follows:\n", num);
    for (int i = 1; i <= num; i++) {
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
    return 0;
}