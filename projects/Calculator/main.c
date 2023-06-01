#include <stdio.h>

int main() {
    double num1, num2;
    char operation;

    printf("Wprowadź operację (np. 2 + 3): ");
    if (scanf("%lf %c %lf", &num1, &operation, &num2) != 3) {
        printf("Error: Invalid input\n");
        return 1;
    }

    switch (operation) {
        case '+':
            printf("%.2lf\n", num1 + num2);
            break;
        case '-':
            printf("%.2lf\n", num1 - num2);
            break;
        case '*':
            printf("%.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            printf("%.2lf\n", num1 / num2);
            break;
        default:
            printf("Error: Invalid operation\n");
            return 1;
    }

    return 0;
}