#include <stdio.h>
#include <locale.h>

//Declaração das variáveis
//Mensagem de apresentação do programa
//Apresentação do Menu principal
//Entrada de dados

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Possibilita o uso de acentos para língua portuguesa.

    int escolha;

    printf("---------------------------------------------------------------------------\n");
    printf("                                MY WORKOUTS                                \n");
    printf("---------------------------------------------------------------------------\n");
    printf("\n");
    printf("Olá,\n");
    printf("Esta é uma ferramenta para que sejam registradas suas atividades físicas.\n");
    printf("\n");
    printf("--------------------------\n");
    printf("      Menu principal      \n");
    printf("--------------------------\n");
    printf("1 - Registro de atividades\n");
    printf("2 - Relatório semanal\n");
    printf("3 - Sair do programa\n");
    printf("\n");

    scanf("%d", &escolha);

    switch (escolha) {
        case 1: //Registro de atividades.
            int dia;

            printf("Selecione o dia da semana:\n");
            printf("    1 - Domingo\n");
            printf("    2 - Segunda-feira\n");
            printf("    3 - Terça-feira\n");
            printf("    4 - Quarta-feira\n");
            printf("    5 - Quinta-feira\n");
            printf("    6 - Sexta-feira\n");
            printf("    7 - Sábado\n");
            printf("\n");

            scanf("%d", &dia);

            FILE *arquivo;
            char atividade[50];
            int duracaomin;

            arquivo = fopen("atividades.txt", "w");
            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                return 1;
            }

            switch (dia) {
                case 1:
                    printf("Qual atividade você realizou no Domingo? ");
                    fprintf(file, "Domingo")
                    fgets(dia, " %s", atividade);
                    printf("Qual a duração da atividade em minutos? ");
                    scanf("%d", &duracaomin);
                    printf("Confirma a gravação dos dados?\n");
                    printf("    1 - Sim\n");
                    printf("    2 - Não\n");
            }


        case 2: //Relatório semanal.

        default: //Sair do programa.
            printf("Obrigado! Até a próxima!\n");
            break;

    }

    return 0;
}