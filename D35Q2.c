#include <stdio.h>

// Helper function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);
    
    // Handle cases where k is greater than n
    k = k % n;
    
    if (k < 0) { // Handle negative rotation
        k = k + n;
    }

    printf("Original array: ");
    printArray(arr, n);

    // Reversal algorithm for right rotation
    // 1. Reverse the whole array
    reverse(arr, 0, n - 1);
    // 2. Reverse the first k elements
    reverse(arr, 0, k - 1);
    // 3. Reverse the remaining n-k elements
    reverse(arr, k, n - 1);

    printf("Array after rotating right by %d positions: ", k);
    printArray(arr, n);

    return 0;
}