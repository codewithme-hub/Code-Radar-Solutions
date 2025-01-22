#include <stdio.h>
int main() {
    int first,second;
    scanf("%d %d",&first,&second);
    if(first==second){
        printf("Equal");
    }
    else if(first>second){
        printf("First\n");
    }
    else if(first<second){
        printf("Second\n");
    }
    //printf("%s", welcome());
    return 0;
}