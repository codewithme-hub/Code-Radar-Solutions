#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxfreq=0; int maxelement=0;
    for (int i = 0; i < n; i++) {
        int count =0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) { 
                count++;
                
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxelement=arr[i];
        }
    }

    printf("%d",maxelement);
    return 0;
}
