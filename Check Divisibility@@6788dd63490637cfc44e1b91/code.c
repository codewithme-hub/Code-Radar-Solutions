#include <stdio.h>
int main() {
    int num1;
    scanf("%d",&num1);
    if((num1%5==0 && num1%11==0)){
        printf("Divisible\n");
    }
    else{
        printf("Not Divisible\n")
    }
    //printf("%s", welcome());
    return 0;
}