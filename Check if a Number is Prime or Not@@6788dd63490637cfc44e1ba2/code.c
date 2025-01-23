#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int isPrime =1;
    if(n<=1){
        isPrime=0;
    }
    for(int i=2; i*i<n;i++){
        if(n%i==0){
            isPrime=0;
        }   
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}