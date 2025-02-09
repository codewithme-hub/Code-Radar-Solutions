#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int lowestSetBit = num & -num;
    printf("%d",num,lowestSetBit);


    //printf("%s", welcome());
    return 0;
}