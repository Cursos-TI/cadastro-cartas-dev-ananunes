#include <stdio.h>
//---Protótipo---
void cabecalho();

int main() {
    cabecalho();
    printf("Para comecar, vamos inserir os dados das cartas.\n\n");

    // --- CARTA 1 ---
    char estado1[3], codigo1[6], cidade1[50];
    double populacao1, area1, pib1;
    int pontosturisticos1;

    printf("=== DADOS DA CARTA 1 ===\n");
    printf("Digite o Estado (Ex: SP): ");
    scanf("%2s", estado1);
    
    printf("Digite o Codigo da Carta (Ex: A01): ");
    scanf("%5s", codigo1);

    printf("Digite o nome da cidade: ");
    // Limpando o buffer antes de ler string com espaço para evitar problemas
    scanf(" %[^\n]s", cidade1); 

    printf("Digite a Populacao: ");
    scanf("%lf", &populacao1);

    printf("Digite a Area (km2): ");
    scanf("%lf", &area1);

    printf("Digite o PIB: ");
    scanf("%lf", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    double densidade1 = populacao1 / area1;
    double pib_per_capita1 = pib1 / populacao1;

    // --- CARTA 2 ---
    char estado2[3], codigo2[6], cidade2[50];
    double populacao2, area2, pib2;
    int pontosturisticos2;

    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Digite o Estado: ");
    scanf("%2s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf("%5s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2); //limpando o buffer para evitar problemas

    printf("Digite a Populacao: ");
    scanf("%lf", &populacao2);

    printf("Digite a Area (km2): ");
    scanf("%lf", &area2);

    printf("Digite o PIB: ");
    scanf("%lf", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    double densidade2 = populacao2 / area2;
    double pib_per_capita2 = pib2 / populacao2;

    // --- EXIBIÇÃO DOS RESULTADOS ---

    // Carta 1
    printf("\n===============================\n");
    printf("         _CARTA 1_\n");
    printf("===============================\n");
    printf("Estado:                    %s\n", estado1);
    printf("Codigo:                    %s\n", codigo1);
    printf("Nome da Cidade:            %s\n", cidade1);
    printf("-------------------------------\n");
    printf("Populacao:                 %.0f\n", populacao1); // .0f para não mostrar decimais em pessoas
    printf("Area(km2):                 %.2f\n", area1);
    printf("PIB(R$):                   %.2f\n", pib1);
    printf("Pontos Turisticos:         %d\n", pontosturisticos1);
    printf("PIB per Capita(R$):        %.2f\n", pib_per_capita1);
    printf("Densidade Pop.(hab/km2):   %.2f\n", densidade1);

    // Carta 2
    printf("\n===============================\n");
    printf("         _CARTA 2_\n");
    printf("===============================\n");
    printf("Estado:                    %s\n", estado2);
    printf("Codigo:                    %s\n", codigo2);
    printf("Nome da Cidade:            %s\n", cidade2);
    printf("-------------------------------\n");
    printf("Populacao:                 %.0f\n", populacao2);
    printf("Area(km2):                 %.2f\n", area2);
    printf("PIB(R$):                   %.2f\n", pib2);
    printf("Pontos Turisticos:         %d\n", pontosturisticos2);
    printf("PIB per Capita(R$):        %.2f\n", pib_per_capita2);
    printf("Densidade Pop.(hab/km2):   %.2f\n", densidade2);
    printf("================================\n");

    return 0;
}

void cabecalho() {
    printf("==============================\n");
    printf("- Bem-Vindo ao Super Trunfo! -\n");
    printf("==============================\n");
}