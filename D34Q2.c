#include <stdio.h>

int main() {
    int arr[100];
    int n, i, value_to_delete;
    int pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &value_to_delete);

    // Find the position of the element to be deleted
    for (i = 0; i < n; i++) {
        if (arr[i] == value_to_delete) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found in the array.\n");
    } else {
        // Shift elements to the left
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}