#include <stdio.h>
int main() {
    int num;
    char choice;
    scanf("%d",&num);
    scanf("%c",&choice);
    switch(choice){
        case '1':
            printf("January\n");
        case '2':
            printf("Febuary\n");
        case '3':
            printf("March\n");
        case '4':
            printf("April\n");
        case '5':
            printf("May\n");
        case '6':
            printf("June\n");
        case '7':
            printf("July\n");
        case '8':
            printf("August\n");
        case '9':
            printf("September\n");
        case '10':
            printf("October\n");
        case '11':
            printf("November\n");
        case '12':
            printf("December\n");
        default:
            printf("Invalid month\n");
    }
    
    return 0;
}