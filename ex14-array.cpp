#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing elements of the array
    printf("Fisrt element:%d\n", numbers[0]);
    printf("Second element:%d\n", numbers[1]);

// modifying an element
    numbers[1] = 100;
    printf("Modified second element:%d\n", numbers[1]);

    // Iterating through the array
    for(int i = 0; i < 5; i++) {
        printf("Position %d: %d\n", i, numbers[i]);
    }
    return 0;
}