#include<stdio.h>
#include<math.h>
int main(){
    int num, square, i=1;
    printf("Enter the range to print the Perfect Square:");
    scanf("%d", &num);
    while(num>0){
        if((square = i*i) < num){
            printf("%d\n", square);
            i++;
        }
        // 0 4 9 16 25 36 49 
    }
}