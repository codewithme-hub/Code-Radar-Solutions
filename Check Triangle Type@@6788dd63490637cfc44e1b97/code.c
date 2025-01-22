#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a=b=c){
        printf("Equilateral\n");
    }
    else if(a=b!=c){
        printf("Isosceles\n");
    }
    else if(a !=b!=c){
        printf("Scalene\n");
    }
   // printf("%s", welcome());
    return 0;
}