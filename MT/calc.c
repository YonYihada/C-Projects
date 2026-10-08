#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // First Number
    printf("Enter first number: ");
    scanf("%lf", &num1);
    // Operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to clear the input buffer
    // Second number
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Error handling: Check if the user is trying to divide by zero
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        // Error handling: If the operator is not recognized
        default:
            printf("Error: Invalid operator entered.\n");
    }
}
