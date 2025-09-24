#include <stdio.h>

int main() {
    // Outer loop for rows (from 5 down to 1 to generate the starting number)
    for (int i = 5; i >= 1; i--) {
        // Inner loop for columns (from the starting number 'i' up to 5)
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
    return 0;
}