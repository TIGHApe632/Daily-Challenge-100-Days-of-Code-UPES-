#include <stdio.h>
#include <math.h>

int main() {
    int n, is_prime;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through each number from 2 to n
    for (int i = 2; i <= n; i++) {
        is_prime = 1; // Assume the number is prime

        // Check for factors from 2 up to the square root of i
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0; // If a factor is found, it's not prime
                break;
            }
        }

        // If is_prime is still 1, then the number is prime
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}