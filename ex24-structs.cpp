#include <stdio.h>      // Biblioteca padrão para entrada e saída (como printf)

// Definição de uma estrutura chamada 'result'
struct result {
    int sum;            // Campo para armazenar a soma de dois números
    int product;        // Campo para armazenar o produto (multiplicação)
    int difference;     // Campo para armazenar a diferença (subtração)
};

// Função que recebe dois inteiros e retorna uma estrutura 'result'
struct result calculate(int a, int b) {
    struct result r;            // Declara uma variável do tipo 'result'

    r.sum = a + b;              // Calcula a soma e armazena em 'sum'
    r.product = a * b;          // Calcula o produto e armazena em 'product'
    r.difference = a - b;       // Calcula a diferença e armazena em 'difference'

    return r;                   // Retorna a estrutura preenchida
}

int main() {
    // Chama a função 'calculate' com os valores 5 e 3
    // Recebe o resultado em uma variável do tipo 'result'
    struct result r = calculate(5, 3);

    // Imprime os valores calculados
    printf("Sum: %d\n", r.sum);             // Exibe a soma: 5 + 3 = 8
    printf("Product: %d\n", r.product);     // Exibe o produto: 5 * 3 = 15
    printf("Difference: %d\n", r.difference); // Exibe a diferença: 5 - 3 = 2

    return 0;   // Finaliza o programa com sucesso
}