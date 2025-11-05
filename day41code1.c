
//Q81 (Strings)
//Count characters in a string without using built-in length functions.


#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // takes input including spaces

    // Loop till null character '\0'
    while (str[count] != '\0') {
        count++;
    }

    // If string ends with newline (from fgets), ignore it
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("%d\n", count);

    return 0;
}
