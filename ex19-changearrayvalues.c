#include <stdio.h>  // Biblioteca padrão para entrada e saída (como printf)

// Função que altera o valor do primeiro elemento de um array
void changearray(int arr[], int size) {
    arr[0] = 999;  // Modifica diretamente o primeiro elemento do array para 999
    // Como arrays são passados por referência em C, essa mudança afeta o array original
}

int main () {
    // Cria um array chamado 'numbers' com três elementos: 1, 2 e 3
    int numbers[3] = {1, 2, 3};

    // Mostra o valor do primeiro elemento do array antes de chamar a função
    printf("Before function call: %d\n", numbers[0]);  // Saída: 1

    // Chama a função 'changearray' e passa o array 'numbers' e seu tamanho (3)
    changearray(numbers, 3);

    // Mostra o valor do primeiro elemento do array após a função ser chamada
    printf("After function call: %d\n", numbers[0]);  // Saída: 999
    // Isso acontece porque a função alterou diretamente o array original

    return 0;  // Finaliza o programa com sucesso
}
