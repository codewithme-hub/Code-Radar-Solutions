#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i])
    }
    max=arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
}