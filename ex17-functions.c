#include <stdio.h>

// Function prototype
int factorial(int n);
float average(int n1, int n2, int n3);
void show_result(float media);

int main() {
    int number = 5;
    float avg;

    // Call the factorial function
    int fat = factorial(number);
    printf("Fatorial of %d = %d\n", number, fat);

    // Call the average function
    avg = average(80, 90, 70);

    // Call the show_result function
    show_result(avg);
    
    return 0;
}

// Function definitions
// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
// Function to calculate average
float average(int n1, int n2, int n3) {
        return (n1 + n2 + n3) / 3.0;
}
// Function to display the result
void show_result(float average) {
    printf("Average = %.2f\n", average);
    if (average >= 70) {
        printf("Status: Approved\n");
    } else {
        printf("Status: Reproved\n");
    }
}
