#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c){
        printf("Valid\n");
    }
    else{
        printf("INvalid\n");
    }
    //printf("%s", welcome());
    return 0;
}