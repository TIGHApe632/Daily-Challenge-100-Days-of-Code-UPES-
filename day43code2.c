
//Q86 (Strings)
//Check if a string is a palindrome.


#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads input with newline

    // Find string length (ignore newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
