#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    printf("==============================\n");
    printf("- Bem-Vindo ao Super Trunfo! -\n");
    printf("==============================\n");
    printf("...\n");
    printf("Para comecar, vamos inserir os dados das cartas.\n \n");

    // Recebendo Informações da CARTA 1
    char estado1 [3];
    char codigo1 [6];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf("=== DADOS DA CARTA 1 ===\n");

    // Estado:
    printf("Digite o Estado: ");
    scanf("%2s", estado1);

    // Código da Carta:
    printf("Digite o Codigo da Carta: ");
    scanf("%5s", codigo1);

    // Cidade:
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1);

    // Habitantes:
    printf("Digite a Populacao(No. de Habitantes): ");
    scanf("%i", &populacao1);

    // Área:
    printf("Digite a Area(em km2): ");
    scanf("%f", &area1);

    // PIB:
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    // Pontos Turísticos:
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%i", &pontosturisticos1);

    printf("...\n");

    // Exibindo informações da Carta 1
    printf("===============================\n");
    printf("         _CARTA 1_\n");
    printf("===============================\n");
    printf("Estado:             %s\n", estado1);
    printf("Codigo:             %s\n", codigo1);
    printf("Nome da Cidade:     %s\n", cidade1);
    printf("-------------------------------\n");
    printf("Populacao:          %i\n", populacao1);
    printf("Area(km2):          %.3f\n", area1);
    printf("PIB(R$):            %.3f\n", pib1);
    printf("Pontos Turisticos:  %i\n", pontosturisticos1);
    printf("================================\n");

    // CARTA 2-------------------------------------------------------|
    printf("...\n");
    printf("Agora, vamos inserir os dados da CARTA 2.\n \n");

    // Recebendo Informações da CARTA 2
    char estado2 [3];
    char codigo2 [6];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("=== DADOS DA CARTA 2 ===\n");

    // Estado:
    printf("Digite o Estado: ");
    scanf("%2s", estado2);

    // Código da Carta:
    printf("Digite o Codigo da Carta: ");
    scanf("%5s", codigo2);

    // Cidade:
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2);

    // Habitantes:
    printf("Digite a Populacao(No. de Habitantes): ");
    scanf("%i", &populacao2);

    // Área:
    printf("Digite a Area(em km2): ");
    scanf("%f", &area2);

    // PIB:
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    // Pontos Turísticos:
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%i", &pontosturisticos2);

    printf("...\n");

    // Exibindo informações da Carta 2
    printf("===============================\n");
    printf("         _CARTA 2_\n");
    printf("===============================\n");
    printf("Estado:             %s\n", estado2);
    printf("Codigo:             %s\n", codigo2);
    printf("Nome da Cidade:     %s\n", cidade2);
    printf("-------------------------------\n");
    printf("Populacao:          %i\n", populacao2);
    printf("Area(km2):          %.3f\n", area2);
    printf("PIB(R$):            %.3f\n", pib2);
    printf("Pontos Turisticos:  %i\n", pontosturisticos2);
    printf("================================\n");

return 0;
} 
