#include <stdio.h>

int main() {
    int arr[100];
    int n, i, key, found = 0, position = -1;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            position = i;
            break; // Stop searching once found
        }
    }

    if (found == 1) {
        printf("Element %d found at index %d (position %d).\n", key, position, position + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}