#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=100){
        printf("IN Range");
    }
    else{
        printf("Out of Range");
    }
    //printf("%s", welcome());
    return 0;
}