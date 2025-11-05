
//Q75 (2D Arrays)
//Add two matrices.


#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    // Input size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    
    int a[r1][c1];
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    int b[r2][c2];
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if matrices can be added
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible! Sizes must be same.\n");
        return 0;
    }f

    int sum[r1][c1];

    // Add both matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the result
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
