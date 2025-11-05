
//Q76 (2D Arrays)
//Check if a matrix is symmetric.


#include <stdio.h>

int main() {
    int n, m;
    
    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    
    int a[n][m];
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // A matrix can be symmetric only if it's square
    if (n != m) {
        printf("False\n");
        return 0;
    }
    
    int symmetric = 1; // assume true
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }
    
    if (symmetric)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}
