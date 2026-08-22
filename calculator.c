//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    // The space before %c is required to consume any leftover newline characters
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}