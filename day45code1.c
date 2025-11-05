
//Q89 (Strings)
//Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // Reads string without spaces

    // Input character to count
    printf("Enter a character to count: ");
    scanf(" %c", &ch);  // Notice the space before %c to skip newline

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    // Output result
    printf("%d", count);

    return 0;
}
