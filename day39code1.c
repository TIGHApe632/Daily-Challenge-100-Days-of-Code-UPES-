
//Q77 (2D Arrays)
//Check if the elements on the diagonal of a matrix are distinct.


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

    // A diagonal exists only for square matrices
    if (n != m) {
        printf("False\n");
        return 0;
    }

    int distinct = 1;  // assume all diagonal elements are distinct

    // Check each diagonal element with the rest
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0; // not distinct
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
