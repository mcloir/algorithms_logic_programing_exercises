#include <stdio.h> //Biblioteca padrão de entrada e saída.
#include <locale.h> //Biblioteca para possibilitar o uso de acentos.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); //Possibilita o uso de acentos para língua portuguesa.

    #define YELLOW "\33[33m" //Definição de cor amarela para textos.
    #define RESET "\33[0m" //Definição para resetar a cor do texto.
    
    //Declaração de variáveis.
    int escolha, gravacao, recomecar, contagem[7] = {0}, modorelatorio, i, veiculos;
    char diasemana[15], linha[100];

    FILE *arquivo; //Declaração do ponteiro para manipulação do arquivo.

    //Cabeçalho do programa.
    printf("---------------------------------------------------------------------------\n");
    printf("                          PEDÁGIO MEU DE CADA DIA                          \n");
    printf("---------------------------------------------------------------------------\n");
    printf("\n");
    printf("Olá,\n");
    printf("Esta é uma ferramenta para que sejam registradas as passagens de carros pela unidade pedágio.\n");
    printf("\n");
    do {
    printf("--------------------------\n");
    printf("      MENU PRINCIPAL      \n");
    printf("--------------------------\n");
    printf("1 - Entrada de dados\n");
    printf("2 - Relatórios\n");
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
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Domingo %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;
                    
                    case 2:
                        do {
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Segunda-feira %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;

                    case 3:
                        do {
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Terça-feira %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;

                    case 4:
                        do {
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Quarta-feira %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;

                    case 5:
                        do {
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Quinta-feira %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;

                    case 6:
                        do {
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Sexta-feira %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;

                    case 7:
                        do {
                            arquivo = fopen("veiculos.txt", "a"); //Abre o o arquivo para registro de atividades.
                            if (arquivo == NULL) {
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                            }

                            printf("Inserir quantidade de veículos que passaram pelo pedágio neste dia? ");
                            scanf("%d", &veiculos);

                            printf("Confirma a gravação dos dados?\n"); //Confirmação de gravação para evitar erros de entrada de dados.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &gravacao);

                            if (gravacao == 1) {// Gravação de dados no arquivo.
                                fprintf(arquivo, "Sábado %d\n", veiculos);
                                fclose(arquivo);
                                printf("Gravação realizada com sucesso! \n");
                                printf("\n");
                            } else {
                                printf ("Gravação cancelada! \n");
                            }

                            printf("Deseja inserir mais dados para este dia?\n"); //Opção para inserir mais dados no mesmo dia.
                            printf("    1 - Sim\n");
                            printf("    2 - Não\n");
                            scanf("%d", &recomecar);

                        } while (recomecar == 1);
                            fclose(arquivo);// Fechamento do arquivo.
                        break;

                    default:
                        break;
                }
            break;

            case 2: //Relatório semanal.
                arquivo = fopen("veiculos.txt", "r");
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                printf("Selecione o modo de relatório:\n"); //Menu de seleção de modos de relatório.
                printf("    1 - Entrada de dados\n"); //Relatório que traz todas as entradas de dados conforme registro, sem sumarização.
                printf("    2 - Passagem de veículos por dia da semana\n"); //Resumo de quantidade de veículos por dia da semana.
                printf("    3 - Dia de Pico\n"); //Relatório para identificar o dia com maior quantidade de veículos passantes.

                scanf("%d", &modorelatorio);
                    if (modorelatorio < 1 || modorelatorio > 3) {
                        printf("Opção inválida! Tente novamente: \n");
                        scanf("%d", &modorelatorio);
                    }

                switch (modorelatorio) {
                    case 1:
                        printf("---------------------------------\n");
                        printf("            RELATÓRIO            \n");
                        printf("---------------------------------\n");
                        printf("\n");

                        printf("1. Entrada de dados:\n"); //Leitura dos dados contidos no arquivo.
                        while (fscanf(arquivo, "%s %d", diasemana, &veiculos) == 2) {
                            printf("%s: %d veículos\n", diasemana, veiculos);
                        }
                        fclose(arquivo);

                        printf("\n");
                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();

                        break;
                    
                    case 2:
                        printf("---------------------------------\n");
                        printf("            RELATÓRIO            \n");
                        printf("---------------------------------\n");
                        printf("\n");

                        for (i = 0; i < 7; i++) {
                            contagem[i] = 0; // Inicializa o array de contagem com zeros
                        }

                        while (fscanf(arquivo, "%s %d", diasemana, &veiculos) == 2) {
                            if (strstr(diasemana, "Domingo") != NULL) {
                                contagem[0] += veiculos;
                            } else if (strstr(diasemana, "Segunda-feira") != NULL) {
                                contagem[1] += veiculos;
                            } else if (strstr(diasemana, "Terça-feira") != NULL) {
                                contagem[2] += veiculos;
                            } else if (strstr(diasemana, "Quarta-feira") != NULL) {
                                contagem[3] += veiculos;
                            } else if (strstr(diasemana, "Quinta-feira") != NULL) {
                                contagem[4] += veiculos;
                            } else if (strstr(diasemana, "Sexta-feira") != NULL) {
                                contagem[5] += veiculos;
                            } else if (strstr(diasemana, "Sábado") != NULL) {
                                contagem[6] += veiculos;
                            }
                        }
                        
                        printf("2. Passagem de veículos por dia da semana:\n");
                        printf("Domingo: %d veículos\n", contagem[0]);
                        printf("Segunda-feira: %d veículos\n", contagem[1]);
                        printf("Terça-feira: %d veículos\n", contagem[2]);
                        printf("Quarta-feira: %d veículos\n", contagem[3]);
                        printf("Quinta-feira: %d veículos\n", contagem[4]);
                        printf("Sexta-feira: %d veículos\n", contagem[5]);
                        printf("Sábado: %d veículos\n", contagem[6]);

                        fclose(arquivo);

                        printf("\n");
                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();

                        break;

                    case 3:
                        printf("---------------------------------\n");
                        printf("            RELATÓRIO            \n");
                        printf("---------------------------------\n");
                        printf("\n");
                        printf("3. Dia de Pico:\n");

                        for (i = 0; i < 7; i++) {
                            contagem[i] = 0; // Inicializa o array de contagem com zeros
                        }

                        while (fscanf(arquivo, "%s %d", diasemana, &veiculos) == 2) {
                            if (strstr(diasemana, "Domingo") != NULL) {
                                contagem[0] += veiculos;
                            } else if (strstr(diasemana, "Segunda-feira") != NULL) {
                                contagem[1] += veiculos;
                            } else if (strstr(diasemana, "Terça-feira") != NULL) {
                                contagem[2] += veiculos;
                            } else if (strstr(diasemana, "Quarta-feira") != NULL) {
                                contagem[3] += veiculos;
                            } else if (strstr(diasemana, "Quinta-feira") != NULL) {
                                contagem[4] += veiculos;
                            } else if (strstr(diasemana, "Sexta-feira") != NULL) {
                                contagem[5] += veiculos;
                            } else if (strstr(diasemana, "Sábado") != NULL) {
                                contagem[6] += veiculos;
                            }
                        }

                        int maxveiculos = contagem[0];
                        int indicemax = 0;

                        for (i = 1; i < 7; i++) {
                            if (contagem[i] > maxveiculos) {
                                maxveiculos = contagem[i];
                                indicemax = i;
                            }
                        }

                        char *dias[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

                        printf("Dia com maior passagem de veículos: "
                                YELLOW "%s" RESET
                                " com "
                                YELLOW "%d" RESET
                                " veículos\n", dias[indicemax], maxveiculos);

                        fclose(arquivo);

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
                    arquivo = fopen("veiculos.txt", "w");
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