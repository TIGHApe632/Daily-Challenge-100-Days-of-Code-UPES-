
//Q98 (Strings)
//Print initials of a name with the surname displayed in full.


#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Find last space (before surname)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials (characters after spaces, before last name)
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }

    // Print surname
    printf(" ");
    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++)
        printf("%c", name[i]);

    return 0;
}
