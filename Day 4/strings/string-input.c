#include<stdio.h>
int main(){
    int size1, size2;
    printf("Enter the number of characters: ");
    scanf("%d %d", &size1, &size2);
    char first_name[size1], last_name[size2];
    printf("Enter the first string: ");
    for(int i=0; i<size1; i++){
        scanf(" %c", &first_name[i]);
    }
    printf("Enter the second string: ");
    for(int i=0; i<size2; i++){
        scanf(" %c", &last_name[i]);
    }
    printf("Yov've entered: ");
    for(int i=0;i<size1;i++){
        printf("%c",first_name[i]);
    }
    printf("\t");
    for(int i=0;i<size2;i++){
        printf("%c",last_name[i]);
    }
}