#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n &(1<<31)){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
   // printf("%s", welcome());
    return 0;
}