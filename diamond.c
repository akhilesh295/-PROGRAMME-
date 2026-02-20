#include <stdio.h>

int main() {
    int n = 5;

    // Below nested loop print upper part 
    // of the pyramid
    for(int i = 1; i <= n; i++) {
        
        // This inner loop print leading spaces
        for(int j = 1; j <= n - i; j++) printf(" ");
        
        // This inner loop prints star (*)
        for(int j = 1; j <= 2*i - 1; j++) printf("*");
        printf("\n");
    }

    // Below nested loop print lower part 
    // of the pyramid
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) printf(" ");
        for(int j = 1; j <= 2*i - 1; j++) printf("*");
        printf("\n");
    }

    return 0;
}