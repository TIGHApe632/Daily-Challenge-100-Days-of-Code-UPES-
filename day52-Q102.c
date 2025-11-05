
//Q102 (Logic Enhancers)
//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.


#include <stdio.h>

int main() {
    int n, x, i, index = -1;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value of x
    printf("Enter x: ");
    scanf("%d", &x);

    // Find the index of the ceil of x
    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break;  // first element >= x found, stop searching
        }
    }

    // Output result
    printf("%d\n", index);

    return 0;
}
