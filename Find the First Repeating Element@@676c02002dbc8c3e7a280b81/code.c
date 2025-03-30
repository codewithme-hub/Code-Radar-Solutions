#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding duplicates
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Check if arr[i] was already printed before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count = -1; // Mark as already printed
                break;
            }
        }

        if (count == -1) continue; // Skip if already printed

        // Check for duplicates ahead
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; // Found a duplicate
                break;   // No need to check further
            }
        }

        if (count > 0) { // If duplicate found, print it once
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
