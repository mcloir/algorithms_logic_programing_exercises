#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i; // the same of sum = sum + i;
    }
    printf("Total sum is %d\n", sum);
    
    return 0;
}