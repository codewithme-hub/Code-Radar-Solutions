#include <stdio.h>
int main() {
    int num1, num2;
    char choice;

    // Taking input in the format "5 3 +"
    scanf("%d %d %c", &num1, &num2, &choice);

    // Performing the calculation based on the operator
    switch (choice) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            // Checking for division by zero
            if (num2 != 0.0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("error\n");
    }

    return 0;
}
    //printf("%s", welcome());
