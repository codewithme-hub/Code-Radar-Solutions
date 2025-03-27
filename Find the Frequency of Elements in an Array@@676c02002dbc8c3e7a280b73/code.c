// Your code here...
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int count=1;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        count++;
    }
}
printf("%d %d\n", arr[i], count);



} 

