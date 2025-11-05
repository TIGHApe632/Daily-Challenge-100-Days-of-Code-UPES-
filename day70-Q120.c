
//Q120 (File Handling)
//Write a program to take a string input. Change it to sentence case.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}
