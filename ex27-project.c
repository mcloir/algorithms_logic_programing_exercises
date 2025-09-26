#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_books 100
#define max_name 50

struct book {
    int id;
    char title[max_name];
    char author[max_name];
    int year;
    int availability; // 1 = disponível, 0 = emprestado
};

struct book library [max_books];
int total_books = 0;

void load(void);
void save(void) {
    printf("Saving\n");
}
void add(void);
void list(void);
int search(int id);
void lend(void);
void returning(void);
void mainmenu(void) {
    printf("Main Menu\n");
}

int main () {
    load();
    mainmenu();
    save();

    return 0;

}

void load(void) {
    FILE *file = fopen("library.txt", "r");

    if (file == NULL) {
        printf("File not found, initializing an empty library.\n");
        return;
    }

    while (fscanf(file, "%d %s %s %d %d",
        &library[total_books].id,
        library[total_books].title,
        library[total_books].author,
        &library[total_books].year,
        &library[total_books].availability) == 5 && total_books < max_books) {
        total_books++;
        }
    fclose(file);
    printf("Library loaded with %d book(s).\n", total_books);
}