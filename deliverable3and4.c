void isPrime();

#include <stdio.h>

int main() {

    isPrime();

}

void isPrime() {
    int number;
    int check = 0;
    printf("Enter a number to chek: \n");
    scanf("%d", &number);

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
}