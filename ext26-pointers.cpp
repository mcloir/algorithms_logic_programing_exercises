#include <stdio.h> // Biblioteca padrão para entrada e saída

// Função que troca os valores de duas variáveis usando ponteiros
void change_value(int *a, int *b) {
    int temp = *a;   // Armazena temporariamente o valor apontado por 'a'
    *a = *b;         // Atribui à variável 'a' o valor apontado por 'b'
    *b = temp;       // Atribui à variável 'b' o valor armazenado em 'temp'
}

// Função que realiza operações matemáticas básicas entre dois inteiros
void calculate_operations(int a, int b, int *sum, int *product, int *difference){
    *sum = a + b;           // Calcula a soma de 'a' e 'b' e armazena no ponteiro 'sum'
    *product = a * b;       // Calcula o produto de 'a' e 'b' e armazena no ponteiro 'product'
    *difference = a - b;    // Calcula a diferença entre 'a' e 'b' e armazena no ponteiro 'difference'
}

int main() {
    int x = 10, y = 20; // Declara duas variáveis inteiras com valores iniciais

    // Exibe os valores antes da troca
    printf("Before change: x = %d, y = %d\n", x, y);

    // Chama a função para trocar os valores de 'x' e 'y'
    change_value(&x, &y);

    // Exibe os valores após a troca
    printf("After change: x = %d, y = %d\n", x, y);

    // Declara duas novas variáveis para operações matemáticas
    int number1 = 15, number2 = 5;
    int sum, product, difference; // Variáveis para armazenar os resultados

    // Chama a função para calcular soma, produto e diferença
    calculate_operations(number1, number2, &sum, &product, &difference);

    // Exibe os resultados das operações
    printf("Sum: %d, Product: %d, Difference: %d\n", sum, product, difference);

    return 0; // Finaliza o programa com sucesso
}