#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}
int secondsmallest(int arr[],int n){
    if(n<2) return -1;
    bubbleSort(arr,n);
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>smallest) return arr[i];
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = secondsmallest(arr, n);
    printf("%d", result);
    
    }
