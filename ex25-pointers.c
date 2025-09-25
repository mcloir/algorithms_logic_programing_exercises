#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {
    int value = 43; // Declara uma variável inteira chamada 'value' e atribui o valor 43
    int *pointer = &value; // Declara um ponteiro para inteiro chamado 'pointer' e o inicializa com o endereço de 'value'

    // Imprime o valor da variável 'value'
    printf("Variable value: %d\n", value);

    // Imprime o endereço de memória onde o ponteiro 'pointer' está armazenado
    printf("Pointer address: %p\n", &pointer);

    // Imprime o valor armazenado no ponteiro, ou seja, o endereço da variável 'value'
    printf("Pointer value: %p\n", pointer);

    // Imprime o valor da variável 'value' acessado através do ponteiro
    printf("Value via pointer: %d\n", *pointer);

    // Modifica o valor da variável 'value' através do ponteiro
    *pointer = 100;

    // Imprime o novo valor da variável 'value' após a modificação via ponteiro
    printf("New variable value: %d\n", value);

    return 0; // Indica que o programa terminou com sucesso
}