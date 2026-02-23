#include <stdio.h>

//---Protótipo---
void cabecalho();

int main() {
    cabecalho();
    printf("Para comecar, vamos inserir os dados das cartas.\n\n");

    // --- CARTA 1 ---
    char estado1[3], codigo1[6], cidade1[50];
    unsigned long int populacao1;
    double area1, pib1;
    int pontosturisticos1;

    printf("=== DADOS DA CARTA 1 ===\n");

    printf("Digite o Estado (Ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%5s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1); //Limpando o buff de entrada

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (km2): ");
    scanf("%lf", &area1);

    printf("Digite o PIB: ");
    scanf("%lf", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    double densidade1 = (double)populacao1 / area1;
    double pib_per_capita1 = pib1 / populacao1;

    float super_poder1 = (float)(
        populacao1 +
        area1 +
        pib1 +
        pontosturisticos1 +
        pib_per_capita1 +
        (1.0 / densidade1)
    );

    // --- CARTA 2 ---
    char estado2[3], codigo2[6], cidade2[50];
    unsigned long int populacao2;
    double area2, pib2;
    int pontosturisticos2;

    printf("\n=== DADOS DA CARTA 2 ===\n");

    printf("Digite o Estado: ");
    scanf("%2s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf("%5s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);//Limpando o buff de entrada

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (km2): ");
    scanf("%lf", &area2);

    printf("Digite o PIB: ");
    scanf("%lf", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    double densidade2 = (double)populacao2 / area2;
    double pib_per_capita2 = pib2 / populacao2;

    //Calculando Super Poder (Organizando variáveis p/ melhor visualização)
    float super_poder2 = (float)(
        populacao2 +
        area2 +
        pib2 +
        pontosturisticos2 +
        pib_per_capita2 +
        (1.0 / densidade2)
    );

    // =====COMPARANDO_AS_CARTAS=====

    printf("\n===============================\n");
    printf("Comparacao de Cartas:\n\n");

    int resultado;

    // População
    resultado = populacao1 > populacao2;
    printf("Populacao: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Área
    resultado = area1 > area2;
    printf("Area: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // PIB
    resultado = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Pontos Turísticos
    resultado = pontosturisticos1 > pontosturisticos2;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Densidade (MENOR vence)
    resultado = densidade1 < densidade2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // PIB per capita
    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    // Super Poder
    resultado = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    printf("===============================\n");

    return 0;
}

void cabecalho() {
    printf("==============================\n");
    printf("- Bem-Vindo ao Super Trunfo! -\n");
    printf("==============================\n");
}