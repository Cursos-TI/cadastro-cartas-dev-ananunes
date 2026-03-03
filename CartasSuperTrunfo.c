#include <stdio.h>

//---Protótipos---
void cabecalho();

//-------Função Principal
int main () {
    cabecalho();

    printf("Hora de cadastrar as cartas!\n");

    //---Variáveis do Jogo---
    char estado1[3], estado2[3];
    char codigo1[6], codigo2[6];
    char cidade1[50], cidade2[50];
    unsigned long populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    double densidade1, densidade2;
    double pibPercapita1, pibPercapita2;
    int opcao; // Variável para o menu

    //---Recebendo Inputs: CARTA 1---
    printf(">> DADOS DA CARTA 1 <<\n");
    printf("Digite o estado (Ex: MA): ");
    scanf(" %2s", estado1);
    printf("Digite o codigo(Ex: A01): ");
    scanf(" %5s", codigo1);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area(km2): ");
    scanf("%lf", &area1);
    printf("Digite o PIB(R$): ");
    scanf("%lf", &pib1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //---Recebendo Inputs: CARTA 2---
    printf("\n>> DADOS DA CARTA 2 <<\n");
    printf("Digite o estado (Ex: SP): ");
    scanf(" %2s", estado2);
    printf("Digite o codigo(Ex: B02): ");
    scanf(" %5s", codigo2);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area(km2): ");
    scanf("%lf", &area2);
    printf("Digite o PIB(R$): ");
    scanf("%lf", &pib2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //---Calculando Dados (Processamento Interno)---
    densidade1 = (double)populacao1 / area1;
    densidade2 = (double)populacao2 / area2;
    pibPercapita1 = pib1 / (double)populacao1;
    pibPercapita2 = pib2 / (double)populacao2;

    //---Menu Interativo---
    printf("\n===============================\n");
    printf("      ESCOLHA O ATRIBUTO       \n");
    printf("===============================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("-------------------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    //---Lógica de Comparação com Switch e If-Else Aninhado---
    printf("\n*** RESULTADO DA COMPARACAO ***\n");

    switch (opcao) {
        case 1: // Comparação por População
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            
            // Estrutura aninhada para verificar Vitoria ou Empate
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Vencedor: Carta 2 (%s)\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 2: // Comparação por Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else {
                if (area2 > area1) {
                    printf("Vencedor: Carta 2 (%s)\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 3: // Comparação por PIB
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f\n", cidade1, pib1);
            printf("%s: R$ %.2f\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Vencedor: Carta 2 (%s)\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 4: // Comparação por Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Vencedor: Carta 2 (%s)\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        case 5: // Comparação por Densidade (Regra Invertida: Menor Vence)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);

            // Aqui a lógica inverte: o menor valor é o ganhador
            if (densidade1 < densidade2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Vencedor: Carta 2 (%s)\n", cidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
            }
            break;

        default: // Tratamento de opção inválida
            printf("Opcao invalida! Reinicie o programa e escolha de 1 a 5.\n");
            break;
    }

    printf("================================\n");

    return 0;
}

//-----------Função Cabeçalho
void cabecalho() {
    printf("===========================\n");
    printf("----- **SUPER TRUNFO** ----\n");
    printf("===========================\n");
}