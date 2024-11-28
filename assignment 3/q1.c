#include <stdio.h>
#include <math.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float squareRoot(float a);

int main() {
    int choice;
    float num1, num2, result;

    do {
        // Display menu
        printf("\nCalculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Square Root\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operations based on user choice
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 >= 0) {
                    result = squareRoot(num1);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Cannot compute square root of a negative number!\n");
                }
                break;
            case 6:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float squareRoot(float a) {
    return sqrt(a);
}
