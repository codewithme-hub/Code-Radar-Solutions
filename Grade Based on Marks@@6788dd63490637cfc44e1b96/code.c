#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("A\n");
    }
    else if(90>marks>=80){
        printf("B\n");
    }
    else if(80>marks>=70){
        printf("C\n");
    }
    else if(70>marks>=60){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}