#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Outer loop iterate over each row
    for(i = n; i >= 1; i--) {
        
        // This inner loop prints leading spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // This inner loop prints stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}