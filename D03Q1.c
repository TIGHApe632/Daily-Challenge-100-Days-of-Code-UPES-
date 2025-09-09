/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/

#include <stdio.h>

int main() {
    float c;
    printf("input temp. in celcius: ");
    scanf("%f", &c);
    printf("Fahrenheit=%.0f\n", (c * 9 / 5) + 32);
    return 0;
}