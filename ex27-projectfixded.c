#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf, fopen, etc.)
#include <stdlib.h>  // Biblioteca padrão do C (uso futuro: malloc, free, exit, etc.)
#include <string.h>  // Biblioteca para manipulação de strings (strcpy, strcmp, etc.)

#define max_books 100   // Número máximo de livros que a biblioteca pode armazenar
#define max_name 50     // Tamanho máximo do título e do nome do autor

// Estrutura que representa um livro
struct book {
    int id;                         // Identificador único do livro
    char title[max_name];           // Título do livro (string)
    char author[max_name];          // Nome do autor (string)
    int year;                       // Ano de publicação
    int availability;               // Disponibilidade (1 = disponível, 0 = emprestado)
};

// Array global que armazena todos os livros
struct book library[max_books];
int total_books = 0;   // Contador global do total de livros cadastrados

// Protótipos das funções
void load_biblio(void);   // Carrega os livros salvos em arquivo
void save_biblio(void);   // Salva os livros no arquivo
void add_books(void);     // Adiciona novos livros
int search_book(int id);  // Busca um livro pelo ID
void lend_book(void);     // Empresta um livro
void return_book(void);   // Devolve um livro
void main_menu(void);     // Exibe o menu principal

// Função principal do programa
int main () {
    load_biblio();   // Carrega os livros do arquivo para a memória
    main_menu();     // Mostra o menu principal para o usuário
    save_biblio();   // Salva os dados da biblioteca antes de sair

    return 0;        // Retorno padrão do main
}

// Função para carregar os livros de um arquivo texto
void load_biblio(void) {
    FILE *file = fopen("biblio.txt", "r");  // Abre o arquivo em modo leitura

    if (file == NULL) {  // Se o arquivo não existir
        printf("File not found, initializing empty library\n");
        return;  // Continua com biblioteca vazia
    }

    // Lê linha por linha do arquivo e preenche a estrutura library
    while (fscanf(file, "%d %s %s %d %d",
            &library[total_books].id,
            library[total_books].title,
            library[total_books].author,
            &library[total_books].year,
            &library[total_books].availability) == 5 && total_books < max_books) {
        
        total_books++;  // Conta mais um livro carregado
    }

    fclose(file);  // Fecha o arquivo
    printf("Library loaded with %d book(s).\n", total_books);
}
