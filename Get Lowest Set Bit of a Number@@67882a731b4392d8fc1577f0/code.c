#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int lowestSetBit = (num == 1) ? 0 : (num & -num);
    printf("%d",lowestSetBit);


    //printf("%s", welcome());
    return 0;
}