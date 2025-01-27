#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    // Loop through each row, starting from N down to 1
    for (int i = N; i >= 1; i--) {
        // Loop to print letters from 'A' to 'A' + (i - 1)
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);  // Print characters 'A', 'B', etc.
            
            // Print space only if it's not the last character in the row
            if (j != i) {
                printf(" ");
            }
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

