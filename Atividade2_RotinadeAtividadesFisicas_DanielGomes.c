#include <stdio.h> //Biblioteca padrão de entrada e saída.
#include <locale.h> //Biblioteca para possibilitar o uso de acentos.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Possibilita o uso de acentos para língua portuguesa.

    //Declaração de variáveis.
    int escolha, gravacao, recomecar, contagem[7] = {0}, modorelatorio, i;
    float duracaomin, totalmin;
    char atividade[50], diasemana[15], linha[100];

    FILE *arquivo; //Declaração do ponteiro para manipulação do arquivo.

    //Cabeçalho do programa.
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

    scanf("%d", &escolha); //Leitura da escolha do usuário para o menu principal.
        //Laço para validar entrada do usuário.
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
                            arquivo = fopen("atividades.txt", "a"); //Abreo o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Qual atividade você realizou no Domingo? ");
                            scanf(" %[^\n]", atividade);
                            printf("Qual a duração da atividade em minutos? ");
                            scanf("%f", &duracaomin);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Domingo %s %f\n", atividade, duracaomin);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais atividades para este dia?\n"); //Opção para inserir mais atividades no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;
                    
                    case 2:
                        do {
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
                            fclose(arquivo);
                        break;

                    case 3:
                        do {
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
                            fclose(arquivo);
                        break;

                    case 4:
                        do {
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
                            fclose(arquivo);
                        break;

                    case 5:
                        do {
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
                            fclose(arquivo);
                        break;

                    case 6:
                        do {
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
                            fclose(arquivo);
                        break;

                    case 7:
                        do {
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
                            fclose(arquivo);
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

                printf("Selecione o modo de relatório:\n"); //Menu de seleção de modos de relatório.
                printf("    1 - Lista total de atividades\n"); //Relatório que traz todas as atividades conforme registro, sem sumarização.
                printf("    2 - Sumarização de atividades por dia da semana\n"); //Resumo de quantidade de atividades por dia da semana.
                printf("    3 - Top Day\n"); //Relatório para identificar o dia com mais atividades e o dia com maior tempo de atividade física.

                scanf("%d", &modorelatorio);
                    if (modorelatorio < 1 || modorelatorio > 3) {
                        printf("Opção inválida! Tente novamente: \n");
                        scanf("%d", &modorelatorio);
                    }

                switch (modorelatorio) {
                    case 1:
                        printf("-------------------------------\n");
                        printf("Relatório semanal de atividades\n");
                        printf("-------------------------------\n");
                        printf("\n");

                        printf("1. Lista total de atividates:\n"); //Leitura dos dados contidos no arquivo.
                        while (fscanf(arquivo, "%s %s %f", diasemana, atividade, &duracaomin) == 3) {
                            printf("%s: %s - %.0f minutos\n", diasemana, atividade, duracaomin);
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

                        for (i = 0; i < 7; i++) {
                            contagem[i] = 0;
                        }
                        //Leitura dos dados contidos no arquivo e contagem de atividades por dia da semana.
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
                        
                        //Exibição do resumo de atividades por dia da semana.
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
                        printf("3. Top Day:\n");

                        int minutos[7] = {0};
                        for (i = 0; i < 7; i++) {
                            contagem[i] = 0;
                            minutos[i] = 0;
                        }

                        //Leitura dos dados contidos no arquivo, contagem de atividades e soma do tempo de atividade por dia da semana.
                        while (fscanf(arquivo, "%s %s %f", diasemana, atividade, &duracaomin) == 3) {
                            if (strstr(diasemana, "Domingo") != NULL)
                                {contagem[0] ++; minutos[0] += duracaomin;
                            } else if (strstr(diasemana, "Segunda-feira") != NULL) {
                                contagem[1] ++; minutos[1] += duracaomin;
                            } else if (strstr(diasemana, "Terça-feira") != NULL) {
                                contagem[2] ++; minutos[2] += duracaomin;
                            } else if (strstr(diasemana, "Quarta-feira") != NULL) {
                                contagem[3] ++; minutos[3] += duracaomin;
                            } else if (strstr(diasemana, "Quinta-feira") != NULL) {
                                contagem[4] ++; minutos[4] += duracaomin;
                            } else if (strstr(diasemana, "Sexta-feira") != NULL) {
                                contagem[5] ++; minutos[5] += duracaomin;
                            } else if (strstr(diasemana, "Sábado") != NULL) {
                                contagem[6] ++; minutos[6] += duracaomin;
                            }
                        }

                        fclose(arquivo);

                        char *dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

                        //Identificação do dia com mais atividades e do dia com maior tempo de atividade física.
                        int maxatividades = contagem[0], indiceativ = 0;
                        for (i = 1; i < 7; i++) {
                            if (contagem[i] > maxatividades) {
                                maxatividades = contagem[i];
                                indiceativ = i;
                            }
                        }

                        //Identificação do dia com maior tempo de atividade física.
                        int maxminutos = minutos[0], indicemin = 0;
                        for (i = 1; i < 7; i++) {
                            if (minutos[i] > maxminutos) {
                                maxminutos = minutos [i];
                                indicemin = i;
                            }
                        }

                        printf("Dia com mais atividades: %s com %d atividades\n", dias[indiceativ], maxatividades);
                        printf("Dia com maior tempo em atividade: %s com %d minutos\n", dias[indicemin], maxminutos);

                        printf("\n");
                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();

                        break;

                }
                break;
            case 3: //Apagar dados. A ideia é que o usuário possa zerar os registros a cada nova semana.
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