
//Q109 (Logic Enhancers)
//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = 0;

    // First subarray sum
    for(int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;

    // Find max sum of all subarrays of size k
    for(int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);

    return 0;
}
