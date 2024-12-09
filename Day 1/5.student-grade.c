#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 85) {
        printf("Grade: A - Distinction \n");
    } else if (marks >= 75) {
        printf("Grade: B - First Class \n");
    } else if (marks >= 50) {
        printf("Grade: C - Second Class \n");
    } else if (marks >= 35) {
        printf("Grade: D - Just Pass \n");
    } else{
        printf("Grade: F - Fail");
    }
    return 0;
}