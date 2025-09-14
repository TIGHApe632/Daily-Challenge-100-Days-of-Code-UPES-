// Write a program to swap the first and last digits of a number.//
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digitsCount = 0, temp, swappedNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        digitsCount++;
    }

    // Find first and last digits
    firstDigit = num / (int)pow(10, digitsCount - 1);  // First digit
    lastDigit = num % 10;                              // Last digit

    // Remove first digit
    temp = num % (int)pow(10, digitsCount - 1);
    // Remove last digit from the middle part
    temp = temp / 10;

    // Construct swapped number
    swappedNum = lastDigit * (int)pow(10, digitsCount - 1); // Place last digit in front
    swappedNum += temp * 10;                                // Insert the middle part
    swappedNum += firstDigit;                               // Place first digit at the end

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}