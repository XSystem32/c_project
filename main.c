int isPrime();
int readS();
#include <stdio.h>

int main() {

    int c, number;

    number = (int) &c;


    readS();
    isPrime(&number);


}

int readS(int *c) {

    int a;
    int b;

    printf("Input a 2 digit decimal number between 0 and 99: \n");

    printf("Enter first number: \n");
    scanf("%i", &a);

    printf("Enter second number: \n");
    scanf("%i", &b);

    c = (int *) (a + b);

    printf("The result is: %d %s", *c, "\n");

    return *c;
}

int isPrime(int number) {
    int check;

    for (int i = 2; i <= number/2; ++i) {
        if (number % i == 0) {
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("%d is a prime number.", number);
    } else {
        printf("%d is not prime number.", number);
    }

    return number;
}