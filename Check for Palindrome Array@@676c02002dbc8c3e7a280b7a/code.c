#include<stdio.h>
int isPalindrome(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
    if(arr[i] !=arr[j]){
        return 0;
    }
    i++;
    j--;
}
return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(isPalindrome(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }

}