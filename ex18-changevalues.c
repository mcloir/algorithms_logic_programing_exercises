#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída (como printf)

// Função que tenta alterar o valor de uma variável
void altvalue(int x) {
    x = 100;  // Aqui, a cópia da variável 'x' recebe o valor 100
    printf("Inside function: %d\n", x);  // Mostra o valor alterado dentro da função
    // Mas atenção: isso não muda o valor original fora da função!
}

int main() {
    int x = 50;  // Cria uma variável 'x' com valor inicial 50
    printf("Before function call: %d\n", x);  // Mostra o valor de 'x' antes de chamar a função

    altvalue(x);  // Chama a função e passa o valor de 'x' (50) como cópia

    printf("After function call: %d\n", x);  // Mostra o valor de 'x' depois da função
    // Aqui, o valor continua 50 porque a função só alterou uma cópia, não o original

    return 0;  // Encerra o programa
}
