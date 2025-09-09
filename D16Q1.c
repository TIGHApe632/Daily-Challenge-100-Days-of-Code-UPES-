#include <stdio.h>

int main() {
    int num, i;
    int binary; // Array to store binary digits

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case if input is 0
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}