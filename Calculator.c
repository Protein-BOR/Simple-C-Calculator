#include <stdio.h>

int main() {
    char operator;  // To store the operator (+, -, *, /)
    double num1, num2, result;  // Variables to store two numbers and the result

    // Asking user to input an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Asking user to input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch-case to perform the corresponding operation based on the input operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check if the denominator is not zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            // If the operator is not one of the four valid ones
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}
