#include <stdio.h>

int main() {
    int age;

    printf("How old are you? ");
    scanf("%*d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }
    return 0;
}

// test