#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // Print numbers starting from (6 - i) up to 5
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}