
//Q91 (Strings)
//Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // reads string without spaces

    // Remove vowels
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && 
            str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && 
            str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0'; // end the string

    // Output result
    printf("%s", result);

    return 0;
}
