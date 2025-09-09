/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>

int main() {
    int total, h, m, s;
    
    printf("Input time in Seconds:");
    scanf("%d", &total);

    h = total / 3600;
    total %= 3600;
    m = total / 60;
    s = total % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}