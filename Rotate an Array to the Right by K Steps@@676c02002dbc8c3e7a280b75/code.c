// Your code here...
#include<stdio.h>
void reverse(int arr[],int a,int b){
    int i=a;
    int j=b;
    while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    return;
}
}
int main(){
    int n ,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
}