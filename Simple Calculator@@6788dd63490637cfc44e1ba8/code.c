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
            if (num2 == 0) {
                printf("error\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
    }

    return 0;
}
    //printf("%s", welcome());
