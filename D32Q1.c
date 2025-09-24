#include <stdio.h>

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int n1, n2, mergedSize;
    int i, j;

    // Input for first array
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergedSize = n1 + n2;

    // Merge logic
    // Copy first array into mergedArr
    for (i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }
    // Copy second array into mergedArr
    for (i = 0, j = n1; i < n2; i++, j++) {
        mergedArr[j] = arr2[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}