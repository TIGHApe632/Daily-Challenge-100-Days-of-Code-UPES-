
//Q88 (Strings)
//Replace spaces with hyphens in a string.


#include <stdio.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    // Output the modified string
    printf("%s", str);

    return 0;
}
