#include <stdio.h>

int main() {
    int i, j, space, rows = 5;

    // Outer loop for rows
    for (i = 1; i <= rows; ++i) {
        // Inner loop to print spaces for alignment
        for (space = 1; space <= rows - i; ++space) {
            printf(" ");
        }
        // Inner loop to print stars
        for (j = 1; j <= (2 * i - 1); ++j) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}