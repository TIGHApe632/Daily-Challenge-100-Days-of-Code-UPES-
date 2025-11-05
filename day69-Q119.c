
//Q119 (Logic Enhancers)
//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Since only one element is repeated, we can use the sum formula
    int total = (n - 1) * (n - 2) / 2;  // Expected sum if no repetition
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += nums[i];  // One single iteration to find total sum

    int repeated = sum - total;
    printf("Repeated element: %d\n", repeated);

    return 0;
}
