#include <stdio.h>

int main () {
    int a = 1000000;
    int b = 1000000;
    // int result = a * b; // This line causes an integer overflow
    long long result = (long long) a * b;
    printf("The result is: %lld\n", result);
    return 0;
}