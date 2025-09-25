#include <stdio.h>

// return the maximum value between three integers
int max(int a, int b, int c) {
    int maxval = a; // assume a is the largest

    if (b > maxval) maxval = b;
    if (c > maxval) maxval = c;

    return maxval;
}

int main () {
    int x = 15;
    int y = 23;
    int z = 19;

    int maximum = max(x, y, z);
    printf("The maximum value is: %d\n", maximum);

    return 0;
}
