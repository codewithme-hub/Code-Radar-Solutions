#include<stdbool.h>
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag =true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=false;
        } 
    } if(flag==true) break;
}
}