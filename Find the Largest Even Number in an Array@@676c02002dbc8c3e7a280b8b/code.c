#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            if(arr[i]%2==0){
                max=arr[i];
            }
        }
    } printf("%d",arr[i]);
}