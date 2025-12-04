#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nChoose an arithmetic operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (b != 0)
                result = a / b;
            else {
                printf("Error! Division by zero.\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please select between 1-4.\n");
    }

    return 0;
}
