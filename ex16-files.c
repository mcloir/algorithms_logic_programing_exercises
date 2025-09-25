#include <stdio.h>

int main () {
    FILE *file;

    file = fopen("input2.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf (file, "Daniel_Gomes 30 2500\n");
    fprintf (file, "Maria_Silva 25 4000\n");
    fprintf (file, "John_Paul 27 3200\n");

    fclose (file);

    file = fopen ("input2.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    int age;
    float salary;

    printf("Employee Details:\n");
    while (fscanf(file, "%s %d %f", name, &age, &salary) == 3) {
        printf("Name: %s, Age: %d, Salary: %.2f\n", name, age, salary);
    }
    fclose(file);
    return 0;
}