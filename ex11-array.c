#include <stdio.h>

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    float average = (float)sum / size;
    printf("The average is: %.2f\n", average);

    return 0;
}