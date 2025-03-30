#include <stdio.h>
#include<math.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int maxproduct(int arr[],int n){
    if(n<2) return -1;
    bubbleSort(arr,n);
    int 01=arr[n-1] * arr[n-2];
    int 02=arr[0] * arr[1];
    return fmax(arr[n - 1] * arr[n - 2], arr[0] * arr[1]);

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = maxproduct(arr, n);
    printf("%d",result);
}