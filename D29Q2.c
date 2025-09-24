#include <stdio.h>
#include <limits.h> // For INT_MIN and INT_MAX

int main() {
    int arr[100];
    int n, i;
    int max, min;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array must have at least one element.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = arr[0];
    min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}