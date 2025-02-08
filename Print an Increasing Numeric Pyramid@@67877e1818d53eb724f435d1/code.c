#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){
            printf(" ");
        } nsp=nsp-1;
        for(int j=1;j<=nst;j++){
            printf("%d ",j);
        } nst=nst+1;
        printf("\n");
    }
    return 0;
}