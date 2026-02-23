#include <stdio.h>

//---Protótipo---
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

    //---Recebendo Inputs: CARTA 1---
    printf(">> DADOS DA CARTA 1 <<\n");

    //Estado
    printf("Digite o estado (Ex: MA): ");
    scanf(" %2s", estado1);
    //Código
    printf("Digite o codigo(Ex: A01): ");
    scanf(" %5s", codigo1);
    //Cidade
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);
    //Populção
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    //Área
    printf("Digite a area(km2): ");
    scanf("%lf", &area1);
    //PIB
    printf("Digite o PIB(R$): ");
    scanf("%lf", &pib1);
    //Pontos Turísticos
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //---Recebendo Inputs: CARTA 2---
    printf(">> DADOS DA CARTA 2 <<\n");

    //Estado
    printf("Digite o estado (Ex: MA): ");
    scanf(" %2s", estado2);
    //Código
    printf("Digite o codigo(Ex: A01): ");
    scanf(" %5s", codigo2);
    //Cidade
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);
    //Populção
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    //Área
    printf("Digite a area(km2): ");
    scanf("%lf", &area2);
    //PIB
    printf("Digite o PIB(R$): ");
    scanf("%lf", &pib2);
    //Pontos Turísticos
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //---Calculando Dados---
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPercapita1 = pib1 / populacao1;
    pibPercapita2 = pib2 / populacao2;
    //--------

    //---Exibindo Dados---
    printf("===============================\n");
    printf("         _CARTA 1_\n");
    printf("===============================\n");
    printf("Estado:             %s\n", estado1);
    printf("Codigo:             %s\n", codigo1);
    printf("Nome da Cidade:     %s\n", cidade1);
    printf("-------------------------------\n");
    printf("Populacao:          %lu\n", populacao1);
    printf("Area(km2):          %.3f\n", area1);
    printf("PIB(R$):            %.3f\n", pib1);
    printf("Pontos Turisticos:  %i\n", pontosTuristicos1);
    printf("Densidade:          %lf\n", densidade1);
    printf("PIB Per Capita:     %lf\n", pibPercapita1);
    printf("================================\n");

    printf("===============================\n");
    printf("         _CARTA 2_\n");
    printf("===============================\n");
    printf("Estado:             %s\n", estado2);
    printf("Codigo:             %s\n", codigo2);
    printf("Nome da Cidade:     %s\n", cidade2);
    printf("-------------------------------\n");
    printf("Populacao:          %lu\n", populacao2);
    printf("Area(km2):          %.3f\n", area2);
    printf("PIB(R$):            %.3f\n", pib2);
    printf("Pontos Turisticos:  %i\n", pontosTuristicos2);
    printf("Densidade:          %lf\n", densidade2);
    printf("PIB Per Capita:     %lf\n", pibPercapita2);
    printf("================================\n");

    // ---Comparação das Cartas (Atributo: Densidade)---
    printf("\n*** COMPARANDO DENSIDADE POPULACIONAL ***\n");
    printf("Carta 1 - %s: %.2f hab/km2\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km2\n", cidade2, densidade2);

    if (densidade1 < densidade2) { // < Ganha quem tem MENOR densidade
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

//-----------Função Cabeçalho
void cabecalho() {
    printf("===========================\n");
    printf("----- **SUPER TRUNFO** ----\n");
    printf("===========================\n");
}