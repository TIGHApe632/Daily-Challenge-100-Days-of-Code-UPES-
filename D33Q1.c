#include <stdio.h>

int main() {
    int arr[100];
    int n, i, key;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Binary Search Logic
    int low = 0, high = n - 1, mid;
    int found = 0, position = -1;

    while (low <= high) {
        mid = low + (high - low) / 2; // To avoid potential overflow

        if (arr[mid] == key) {
            found = 1;
            position = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else { // arr[mid] > key
            high = mid - 1;
        }
    }

    if (found == 1) {
        printf("Element %d found at index %d.\n", key, position);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}