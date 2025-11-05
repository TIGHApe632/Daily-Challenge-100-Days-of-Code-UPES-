
//Q104 (Logic Enhancers)
//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.


#include <stdio.h>

int main() {
    int n, x;
    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  // Sum of 1 to n

    for(x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;  // Sum from 1 to x
        int rightSum = totalSum - leftSum + x;  // Sum from x to n

        if(leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
