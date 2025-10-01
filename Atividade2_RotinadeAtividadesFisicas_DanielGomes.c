#include <stdio.h>
#include <locale.h>

//Declaração das variáveis
//Mensagem de apresentação do programa
//Apresentação do Menu principal
//Entrada de dados

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Possibilita o uso de acentos para língua portuguesa.

    int escolha, gravacao, recomecar, duracaomin;
    char atividade[50];



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
    printf("3 - Apagar dados\n");
    printf("4 - Sair do programa\n");

    printf("\n");

        scanf("%d", &escolha);
        if (escolha < 1 || escolha > 4) {
            printf("Opção inválida! Tente novamente: \n");
        }
    do {
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


                switch (dia) {
                    case 1:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou no Domingo? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Domingo %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;
                    
                    case 2:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou na Segunda-feira? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Segunda-feira %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;

                    case 3:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou na Terça-feira? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Terça-feira %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;

                    case 4:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou na Quarta-feira? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Quarta-feira %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;

                    case 5:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou na Quinta-feira? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Quinta-feira %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;

                    case 6:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou na Sexta-feira? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Sexta-feira %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;

                    case 7:
                        do {
                            FILE *arquivo;
                            arquivo = fopen("atividades.txt", "a");
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou na Sábado? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%d", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Sábado %s %d\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                        break;

                    default:
                        break;
                }
            break;

            case 2: //Relatório semanal.
                break;

            case 3: //Apagar dados.
                FILE *arquivo;
                arquivo = fopen("atividades.txt", "w");
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }
                fclose(arquivo);
                printf("Dados apagados com sucesso!\n");
                break;

            default: //Sair do programa.
                printf("Obrigado! Até a próxima!\n");
                break;

        }
    } while (escolha != 4);
    return 0;
}