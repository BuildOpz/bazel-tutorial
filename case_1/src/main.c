// main.c
#include <stdio.h>
#include "calculations.h"
#include "greetings.h"

int main() {
    greet_user();

    double num1, num2;
    char operation;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    double result;
    switch (operation) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    printf("Result: %lf\n", result);
    return 0;
}