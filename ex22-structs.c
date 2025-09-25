#include <stdio.h>      // Biblioteca padrão para entrada e saída (printf, etc.)
#include <string.h>     // Biblioteca para manipulação de strings (strcpy, etc.)

// Definição de uma estrutura chamada 'person'
struct person {
    char name[50];      // Campo para armazenar o nome (até 49 caracteres + '\0')
    int age;            // Campo para armazenar a idade
    float height;       // Campo para armazenar a altura em centímetros
};

int main() {
    // Declaração de uma variável do tipo 'struct person' chamada 'student'
    struct person student;

    // Copia a string "Daniel" para o campo 'name' da estrutura 'student'
    strcpy(student.name, "Daniel");

    // Atribui o valor 21 ao campo 'age' da estrutura 'student'
    student.age = 21;

    // Atribui o valor 181.5 ao campo 'height' da estrutura 'student'
    student.height = 181.5;

    // Exibe o nome armazenado na estrutura
    printf("Name: %s\n", student.name);

    // Exibe a idade armazenada na estrutura
    printf("Age: %d\n", student.age);

    // Exibe a altura armazenada na estrutura com duas casas decimais
    printf("Height: %.2f cm\n", student.height);

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}