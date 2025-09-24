#include <stdio.h>      // Biblioteca padrão para entrada e saída (printf, etc.)
#include <string.h>     // Biblioteca para manipulação de strings (strcpy, etc.)

// Definição da estrutura 'product' que representa um produto
struct product {
    int code;           // Código identificador do produto
    char name[50];      // Nome do produto (até 49 caracteres + '\0')
    float price;        // Preço do produto
    int stock;          // Quantidade disponível em estoque
};

// Função que imprime os dados de um produto
void printproduct(struct product p) {
    printf("Code: %d\n", p.code);           // Imprime o código do produto
    printf("Name: %s\n", p.name);           // Imprime o nome do produto
    printf("Price: %.2f\n", p.price);       // Imprime o preço com duas casas decimais
    printf("Stock: %d\n", p.stock);         // Imprime a quantidade em estoque
    printf("________________________________\n"); // Linha separadora visual
}

// Função que aplica um desconto ao preço do produto
void applydiscount(struct product *p, float discount) {
    // Atualiza o preço com base no desconto (ex: 0.10 representa 10%)
    p->price *= (1 - discount);
}

int main() {
    // Criação e inicialização direta de um produto chamado p1
    struct product p1 = {1001, "Laptop", 1500.00, 10};

    // Criação de outro produto chamado p2, com atribuições separadas
    struct product p2;
    p2.code = 1002;                          // Define o código do produto
    strcpy(p2.name, "Smartphone");          // Copia o nome para o campo 'name'
    p2.price = 800.00;                      // Define o preço do produto
    p2.stock = 25;                          // Define a quantidade em estoque

    // Imprime os dados dos dois produtos antes do desconto
    printproduct(p1);                       // Imprime os dados do produto p1
    printproduct(p2);                       // Imprime os dados do produto p2

    // Aplica um desconto de 10% ao produto p1
    applydiscount(&p1, .10);                // Passa o endereço de p1 para modificar diretamente

    // Imprime os dados de p1 após o desconto aplicado
    printf("After 10%% discount:\n");
    printproduct(p1);                       // Imprime os dados atualizados de p1

    return 0;                               // Finaliza o programa com sucesso
}