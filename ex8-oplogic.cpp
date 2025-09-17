#include <stdio.h>

int main() {
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 18 && age < 65) {
        printf("You are an adult.\n");
    } else if (age >= 65) {
        printf("You are a senior citizen.\n");
    } else {
        printf("You are a minor.\n");
    }
}