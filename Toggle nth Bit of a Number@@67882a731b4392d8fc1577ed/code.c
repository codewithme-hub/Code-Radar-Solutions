#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    num = num ^ (1 << n);
    printf("%d",num);
    //printf("%s", welcome());
    return 0;
}