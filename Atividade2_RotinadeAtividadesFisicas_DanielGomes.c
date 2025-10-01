#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Possibilita o uso de acentos para língua portuguesa.

    int escolha, gravacao, recomecar, contagem[7] = {0}, modorelatorio, i;
    float duracaomin, totalmin;
    char atividade[50], diasemana[15], linha[100];
    FILE *arquivo;

    printf("---------------------------------------------------------------------------\n");
    printf("                                MY WORKOUTS                                \n");
    printf("---------------------------------------------------------------------------\n");
    printf("\n");
    printf("Olá,\n");
    printf("Esta é uma ferramenta para que sejam registradas suas atividades físicas.\n");
    printf("\n");
    do {
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
                    if (dia < 1 || dia > 7) {
                        printf("Opção inválida! Tente novamente: \n");
                        scanf("%d", &dia);
                    }

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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Domingo %s %f\n", atividade, duracaomin);
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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Segunda-feira %s %f\n", atividade, duracaomin);
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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Terça-feira %s %f\n", atividade, duracaomin);
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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Quarta-feira %s %f\n", atividade, duracaomin);
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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Quinta-feira %s %f\n", atividade, duracaomin);
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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Sexta-feira %s %f\n", atividade, duracaomin);
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
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n");
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {
                                fprintf(arquivo, "Sábado %s %f\n", atividade, duracaomin);
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
                arquivo = fopen("atividades.txt", "r");
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                printf("Selecione o modo de relatório:\n");
                printf("    1 - Lista total de atividades\n");
                printf("    2 - Sumarização de atividades por dia da semana\n");
                printf("    3 - Top Day - Ranking de número de atividades e minutores por dia\n");

                scanf("%d", &modorelatorio);
                    if (modorelatorio < 1 || modorelatorio > 2) {
                        printf("Opção inválida! Tente novamente: \n");
                        scanf("%d", &modorelatorio);
                    }

                switch (modorelatorio) {
                    case 1:
                        printf("-------------------------------\n");
                        printf("Relatório semanal de atividades\n");
                        printf("-------------------------------\n");
                        printf("\n");

                        printf("1. Lista total de atividates:\n");
                        while (fscanf(arquivo, "%s %s %d", diasemana, atividade, &duracaomin) == 3) {
                            printf("%s: %s - %d minutos\n", diasemana, atividade, duracaomin);
                        }
                        fclose(arquivo);

                        printf("\n");
                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();

                        break;
                    
                    case 2:
                        printf("-------------------------------\n");
                        printf("Relatório semanal de atividades\n");
                        printf("-------------------------------\n");
                        printf("\n");

                        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                        if (strstr(linha, "Domingo") != NULL) contagem[0]++;
                        else if (strstr(linha, "Segunda-feira") != NULL) contagem[1]++;
                        else if (strstr(linha, "Terça-feira") != NULL) contagem[2]++;
                        else if (strstr(linha, "Quarta-feira") != NULL) contagem[3]++;
                        else if (strstr(linha, "Quinta-feira") != NULL) contagem[4]++;
                        else if (strstr(linha, "Sexta-feira") != NULL) contagem[5]++;
                        else if (strstr(linha, "Sábado") != NULL) contagem[6]++;
                        }
                
                        fclose(arquivo);

                        printf("2. Sumarização de atividades por dia da semana:\n");
                        printf("Domingo: %d atividades\n", contagem[0]);
                        printf("Segunda-feira: %d atividades\n", contagem[1]);
                        printf("Terça-feira: %d atividades\n", contagem[2]);
                        printf("Quarta-feira: %d atividades\n", contagem[3]);
                        printf("Quinta-feira: %d atividades\n", contagem[4]);
                        printf("Sexta-feira: %d atividades\n", contagem[5]);
                        printf("Sábado: %d atividades\n", contagem[6]);
                        printf("\n");

                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();

                        break;

                    case 3:
                        printf("-------------------------------\n");
                        printf("Relatório semanal de atividades\n");
                        printf("-------------------------------\n");
                        printf("\n");
                        printf("2. Sumarização de atividades por dia da semana:\n");

                        


                        break;

                }
                break;
            case 3: //Apagar dados.
                printf("Tem certeza que deseja apagar todos os dados?\n");
                printf("    1 - Sim\n");
                printf("    2 - Não\n");
                scanf("%d", &gravacao);

                if (gravacao != 1) {
                    printf("Operação cancelada! \n");
                    break;
                } else {
                    arquivo = fopen("atividades.txt", "w");
                    if (arquivo == NULL) {
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                    }
                    fclose(arquivo);
                    printf("Dados apagados com sucesso!\n");
                    break;
                };

            default: //Sair do programa.
                printf("Obrigado! Até a próxima!\n");
                break;
        }
    } while (escolha != 4);
    return 0;
}