int readS();
#include <stdio.h>

int main() {
    readS();
}

int readS() {

    int c;

    int a;
    int b;

    printf("Input a 2 digit decimal number between 0 and 99: \n");

    printf("Enter first number: \n");
    scanf("%i", &a);

    printf("Enter second number: \n");
    scanf("%i", &b);

    c = a + b;

    printf("The result is: %d %s", c, "\n");

    return c;
}