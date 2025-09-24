#include <stdio.h>

int main() {
    int arr[101]; // Make space for one extra element
    int n, i, value;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    // Find the correct position to insert
    int pos = 0;
    while (pos < n && arr[pos] < value) {
        pos++;
    }

    // Shift elements to the right
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[pos] = value;
    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}