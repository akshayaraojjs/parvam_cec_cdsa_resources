#include <stdio.h>
int main() {
    int choice, a, b, result;
    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("--------------------\n");
        }
        switch (choice) {
            case 1: 
                result = a + b; 
                printf("Result: %d\n", result); 
                break;
            case 2: 
                result = a - b; 
                printf("Result: %d\n", result); 
                break;
            case 3: 
                result = a * b; 
                printf("Result: %d\n", result); 
                break;
            case 4: 
                if (b != 0) {
                    result = a / b;
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5: 
                printf("Exiting the program.\n"); 
                break;
            default: 
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);
    return 0;
}