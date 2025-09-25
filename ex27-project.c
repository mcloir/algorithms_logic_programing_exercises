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
    int availability;
};

struct book library [max_books];
int total_books = 0;

void load_biblio(void);
void save_biblio(void);
void add_books(void);
int search_book(int id);
void lend_book(void);
void return_book(void);
void main_menu(void);

int main () {
    load_biblio();
    main_menu();
    save_biblio();

    return 0;

}

void load_biblio(void) {
    FILE *file = fopen("biblio.txt", "r");

    if (file == NULL) {
        printf("File not found, initializing empty library");
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