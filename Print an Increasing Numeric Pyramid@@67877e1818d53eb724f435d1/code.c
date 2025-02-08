#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}