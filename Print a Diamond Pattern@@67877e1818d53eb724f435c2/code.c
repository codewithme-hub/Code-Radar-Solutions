#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
    }
    return 0;
}
