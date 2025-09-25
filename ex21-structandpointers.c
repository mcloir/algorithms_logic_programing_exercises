#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída (como printf)

// Função que realiza operações matemáticas básicas:
// soma, produto e diferença entre dois números
// Os resultados são armazenados nas variáveis apontadas pelos ponteiros
void operations(int a, int b, int *sum, int *prod, int *diff) {
    *sum = a + b;      // Calcula a soma e armazena no endereço apontado por 'sum'
    *prod = a * b;     // Calcula o produto e armazena no endereço apontado por 'prod'
    *diff = a - b;     // Calcula a diferença e armazena no endereço apontado por 'diff'
}

int main () {
    // Declara duas variáveis inteiras com valores fixos
    int x = 10, y = 4;

    // Declara três variáveis que vão guardar os resultados das operações
    int sum, prod, diff;

    // Chama a função 'operations' passando:
    // - os valores x e y
    // - os endereços das variáveis 'sum', 'prod' e 'diff'
    // Isso permite que a função altere diretamente essas variáveis
    operations(x, y, &sum, &prod, &diff);

    // Exibe os resultados calculados pela função
    printf("Sum: %d\n", sum);         // Mostra a soma: 10 + 4 = 14
    printf("Product: %d\n", prod);    // Mostra o produto: 10 * 4 = 40
    printf("Difference: %d\n", diff); // Mostra a diferença: 10 - 4 = 6

    return 0;  // Encerra o programa com sucesso
}