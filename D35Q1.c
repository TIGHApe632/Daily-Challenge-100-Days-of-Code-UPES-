#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int arr[100];
    int n, i;
    int largest, second_largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = INT_MIN;
    second_largest = INT_MIN;

    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}