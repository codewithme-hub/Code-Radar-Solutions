#include<stdio.h>
void reverse(int arr[],int a,int b){
    while(a<b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    a++;
    b--;
}
}
int main(){
    int n ,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=(k%n+n)%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 
    return 0;   
}