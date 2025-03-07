#include<stdio.h>
void isPrime(int n){
    if(n<2){
        printf("0");
        return;
    }
    int a=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("1");

    }
    else{
        printf("0");
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;


}