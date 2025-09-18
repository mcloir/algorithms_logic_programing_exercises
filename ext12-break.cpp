#include <stdio.h>

int main () {
    int n[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(n) / sizeof(n[0]);
    int search = 12;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (n[i] == search) {
            found = 1;
            printf("Found %d at index %d\n", search, i);
            break;
        }
    }

    if (!found) {
        printf("%d not found in the array\n", search);
    }

    return 0;
}