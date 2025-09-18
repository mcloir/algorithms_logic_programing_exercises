#include <stdio.h>

int main() {
    printf("The even numbers between 1 to 20 are:\n");

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) { //it is the form to check if a number is even (par)
            continue; //skip the current iteration if the number is even
    }
        printf("%d ", i); //print the odd numbers
    }
    printf("\n");
    return 0;
}