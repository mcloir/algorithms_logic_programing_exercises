#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("inputs.txt", "w"); // Open the file for writing
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "First line of file\n"); // Write to the file
    fprintf(file, "Second line of file %d\n", 42);

    fclose(file);

    file = fopen("inputs.txt", "r"); // Open the file for reading
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), file) != NULL) { // Read each line from the file
        printf("Read: %s", line); // Print the line to the console
    }
    return 0;
}