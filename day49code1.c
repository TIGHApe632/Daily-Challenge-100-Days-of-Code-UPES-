
//Q97 (Strings)
//Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // remove newline character

    // print the first character (first initial)
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // loop through string to find spaces (next initials)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    return 0;
}
