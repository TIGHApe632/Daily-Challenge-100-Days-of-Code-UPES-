#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i]; // same as sum = sum + arr[i]
    }

    printf("Sum of the array elements is: %d\n", sum);

    return 0;
}