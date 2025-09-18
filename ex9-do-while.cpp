#include <stdio.h>

int main() {
    int num, tries = 0;
    const int secretnum = 59; // the use of const makes the variable a constant, cannot be changed.

    printf("Guess the secret number between 1 and 100:\n");
    printf("Try to guess it: \n");

    do {
        printf("Type a number: ");
        scanf("%d", &num);
        tries++; // increment tries by 1, is the same as tries = tries + 1;

        if (num < secretnum) {
            printf("Too low!\n");
        } else if(num > secretnum) {
            printf("Too high!\n");
        } else {
            printf("Congratulations! You guessed it!, the %d is the secret number!\n", secretnum);
            printf("You needed (%d) tries. \n", tries);
        }
        
        } while (num != secretnum); // the loop will continue while num is not equal to secretnum.

        return 0;
    }