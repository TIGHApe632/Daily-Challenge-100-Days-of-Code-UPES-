
//Q87 (Strings)
//Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read entire line

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '\n')
            ; // ignore alphabets and newline
        else
            special++;

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
