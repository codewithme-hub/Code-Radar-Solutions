#include<stdio.h>
int main(){
    int N,int K;
    scanf("%d %d",&N,&K);
    int arr[N];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>K) count++;
    }
    printf("%d",count);
}