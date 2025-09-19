#include <stdio.h>

int main() {
    // Declare a 2D array (matrix) with 3 rows and 3 columns
    int matrix [3][3] = {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9}
    };

    // Print the elements of the matrix
    printf("Position [2][3]: %d\n", matrix[2][3]); // Accessing the element at 3rd row and 4th column (0-indexed)

    matrix[1][2] = 10; // Assigning a new value to the element at 3rd row and 4th column
    printf("Position [2][3]: %d\n", matrix[2][3]); // Print the updated value

    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            printf("%d ", matrix[i][j]); // Print each element
        }
        printf("\n"); // New line after each row
    }
    return 0;
}