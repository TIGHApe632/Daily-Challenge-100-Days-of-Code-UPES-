//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.//
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int num = 1, den = 2;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;           // First term is 1
        } else {
            sum += (float)num / den;
        }
        num += 2;                // odd numbers: 1, 3, 5, 7, ...
        den += 2;                // even numbers: 2, 4, 6, 8, ...
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}