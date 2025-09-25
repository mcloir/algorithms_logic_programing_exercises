#include <stdio.h>  // Inclui a biblioteca padrão para entrada e saída (como printf)

// Declaração das funções que serão usadas mais abaixo no código
int factorial(int n);                 // Função que calcula o fatorial de um número
float average(int n1, int n2, int n3); // Função que calcula a média de três números
void show_result(float avg);        // Função que mostra o resultado da média e o status (aprovado ou reprovado)

int main() {
    int number = 5;   // Define o número para calcular o fatorial
    float avg;        // Variável que vai guardar a média das notas

    // Chama a função que calcula o fatorial de 'number'
    int fat = factorial(number);  
    printf("Fatorial of %d = %d\n", number, fat);  // Exibe o resultado do fatorial

    // Chama a função que calcula a média de três notas
    avg = average(80, 90, 70);  // Calcula a média das notas 80, 90 e 70

    // Chama a função que mostra a média e se foi aprovado ou reprovado
    show_result(avg);  

    return 0;  // Encerra o programa com sucesso
}

// Definição da função que calcula o fatorial de um número
int factorial(int n) {
    int result = 1;  // Começa com 1, pois fatorial é uma multiplicação
    for (int i = 1; i <= n; i++) {  // Loop de 1 até n
        result *= i;  // Multiplica o resultado pelo valor atual de i
    }
    return result;  // Retorna o valor final do fatorial
}

// Definição da função que calcula a média de três números
float average(int n1, int n2, int n3) {
    return (n1 + n2 + n3) / 3.0;  // Soma os três números e divide por 3.0 para obter a média com ponto flutuante
}

// Definição da função que mostra a média e o status
void show_result(float average) {
    printf("Average = %.2f\n", average);  // Exibe a média com duas casas decimais
    if (average >= 70) {  // Se a média for maior ou igual a 70
        printf("Status: Approved\n");  // Exibe "Aprovado"
    } else {  // Se for menor que 70
        printf("Status: Reproved\n");  // Exibe "Reprovado"
    }
}