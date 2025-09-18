#include <stdio.h>

int main() {
    int count = 1;
    int sum = 0;

    printf("Calculating the sum of the first 10 numbers from 1 to 10:\n");

    while (count <= 10) {
        printf("adding %d to sum\n", count);
        sum = sum + count; // the same of sum += count;
        count = count + 1; // the same of count++;
        printf("subtotal is %d\n", sum);
    }
    printf("Total sum is %d\n", sum);
    return 0;
}
