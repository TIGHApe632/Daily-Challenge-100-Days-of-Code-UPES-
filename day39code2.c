
//Q78 (2D Arrays)
//Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal sum only for square matrices
    if (n != m) {
        printf("Not a square matrix.\n");
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i][i];   // add main diagonal elements
    }

    printf("%d\n", sum);

    return 0;
}
