#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
   int max_count=0;result=arr[0];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) count++;
            
        }
        if(count>max_count ||(count==max_count && arr[i]<result)){
            max_count=count;
            result=arr[i];
        }
    printf("%d",result);
        
    }
}