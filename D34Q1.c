#include <stdio.h>

int main() {
    int arr[101]; // Make space for one extra element
    int n, i, value, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);
    printf("Enter the position to insert at (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Convert 1-based position to 0-based index
    int index = pos - 1;

    if (index < 0 || index > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[index] = value;
    n++; // Increase the size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}