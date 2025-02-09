#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    printf("%d\n",(num>>n)&1);

    //printf("%s", welcome());
    return 0;
}