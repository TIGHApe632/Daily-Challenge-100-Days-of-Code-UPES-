
//Q82 (Strings)
//Print each character of a string on a new line.


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // takes full line input

    printf("Characters are:\n");

    while (str[i] != '\0') {
        if (str[i] != '\n') { // skip newline from fgets
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}
