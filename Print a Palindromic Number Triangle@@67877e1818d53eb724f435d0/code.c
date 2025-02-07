#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int q=1;q<=nsp;q++){
            printf(" ");// spaces print wala loop 
            
        }nsp--;
        for(int j=1;j<=i;j++){
            printf("%d",j); number triangle
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",a); //actual logic to print decreasing number..
            a--;
        }
        printf("\n");
    }
    return 0;
}