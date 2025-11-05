
//Q83 (Strings)
//Count vowels and consonants in a string.


#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads entire line

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if it's an alphabet
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert uppercase to lowercase for simplicity
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            // Check vowel or consonant
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
