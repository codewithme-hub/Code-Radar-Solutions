#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the first repeating element (O(n²) approach)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) { // Found a repeating element
                printf("%d", arr[i]); // Print the first repeating element
                return 0; // Exit after finding the first repeating element
            }
        }
    }

    printf("-1"); // No repeating element found
    return 0;
}
