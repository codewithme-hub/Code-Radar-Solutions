#include <stdio.h>
int main() {
    double num1, num2;
    char operator;

    // Taking input in the format "5 3 +"
    scanf("%lf %lf %c", &num1, &num2, &operator);

    // Performing the calculation based on the operator
    switch (operator) {
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
            // Checking for division by zero
            if (num2 != 0.0) {
                printf("%.2lf\n", num1 / num2);
            } else {
                printf("Error\n");
            }
            break;
    }

    return 0;
}
    printf("%s", welcome());
    return 0;
}