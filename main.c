int readS(int *c);
int isPrime();
int resultS();
#include <stdio.h>

int main() {
    int c;
    readS(&c);

    int f = (int) &c;

    isPrime(f);

}

int readS(int *c) {

    int a;
    int b;

    printf("Input a 2 digit decimal number: \n");

    printf("Enter first number: \n");
    scanf("%i", &a);

    printf("Enter second number: \n");
    scanf("%i", &b);

    c = (int *) (a + b);

    printf("The result is: %d %s", (int)c, "\n");

    return *c;
}


int isPrime(int number) {

    printf("%s", "Please enter a number between 0 and 100: \n");

    printf("%n", &number);

    if (number % 2 == 0 && number != 2) {
        printf("%s", "The number is not prime\n");
    } else {
        printf("%s", "The number is prime\n");
    }

    return number;
}

int resultS() {

}