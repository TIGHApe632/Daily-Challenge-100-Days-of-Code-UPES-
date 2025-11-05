
//Q90 (Strings)
//Toggle case of each character in a string.


#include <stdio.h>

int main() {
    char str[100];
    
    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // Reads string without spaces

    // Toggle case
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   
    // Output result
    printf("%s", str);

    return 0;
}
