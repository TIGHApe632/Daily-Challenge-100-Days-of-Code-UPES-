#include <stdio.h>

int main() {
    long long num;
    int digit, most_frequent_digit = 0;
    int frequency[10] = {0}; // Array to store frequency of digits 0-9

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers by taking the absolute value
    if (num < 0) {
        num = -num;
    }
    
    // Handle the case of num being 0
    if (num == 0) {
        frequency[0]++;
    }

    // Calculate frequency of each digit
    while (num > 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    int max_count = 0;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            most_frequent_digit = i;
        }
    }

    printf("The most frequent digit is: %d\n", most_frequent_digit);

    return 0;
}