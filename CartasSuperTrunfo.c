#include <stdio.h>

//---Protótipos---
void cabecalho();

//-------Função Principal
int main () {
    cabecalho();

    printf("Hora de cadastrar as cartas!\n");

    //---Variáveis do Jogo---
    char estado1[3], estado2[3], codigo1[6], codigo2[6], cidade1[50], cidade2[50];
    unsigned long populacao1, populacao2;
    double area1, area2, pib1, pib2, densidade1, densidade2, pibPercapita1, pibPercapita2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Variáveis para a lógica avançada
    int opcao1, opcao2;
    double valor1_A, valor2_A, valor1_B, valor2_B;
    double soma1, soma2;
    char* nomeAtributo1;
    char* nomeAtributo2;

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

    //---Menu do Primeiro Atributo---
    printf("\n===============================\n");
    printf("     ESCOLHA O 1º ATRIBUTO     \n");
    printf("===============================\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("-------------------------------\nEscolha: ");
    scanf("%d", &opcao1);

    // Atribuição de valores baseada na primeira escolha
    switch (opcao1) {
        case 1: valor1_A = populacao1; valor2_A = populacao2; nomeAtributo1 = "Populacao"; break;
        case 2: valor1_A = area1; valor2_A = area2; nomeAtributo1 = "Area"; break;
        case 3: valor1_A = pib1; valor2_A = pib2; nomeAtributo1 = "PIB"; break;
        case 4: valor1_A = pontosTuristicos1; valor2_A = pontosTuristicos2; nomeAtributo1 = "Pontos Turisticos"; break;
        case 5: valor1_A = densidade1; valor2_A = densidade2; nomeAtributo1 = "Densidade"; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    //---Menu do Segundo Atributo (Dinâmico)---
    printf("\n===============================\n");
    printf("     ESCOLHA O 2º ATRIBUTO     \n");
    printf("===============================\n");
    // O menu só mostra opções que não foram escolhidas antes
    if(opcao1 != 1) printf("1 - Populacao\n");
    if(opcao1 != 2) printf("2 - Area\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if(opcao1 != 5) printf("5 - Densidade Demografica\n");
    printf("-------------------------------\nEscolha: ");
    scanf("%d", &opcao2);

    // Validação de escolha repetida ou inválida
    if (opcao1 == opcao2) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Atribuição de valores baseada na segunda escolha
    switch (opcao2) {
        case 1: valor1_B = populacao1; valor2_B = populacao2; nomeAtributo2 = "Populacao"; break;
        case 2: valor1_B = area1; valor2_B = area2; nomeAtributo2 = "Area"; break;
        case 3: valor1_B = pib1; valor2_B = pib2; nomeAtributo2 = "PIB"; break;
        case 4: valor1_B = pontosTuristicos1; valor2_B = pontosTuristicos2; nomeAtributo2 = "Pontos Turisticos"; break;
        case 5: valor1_B = densidade1; valor2_B = densidade2; nomeAtributo2 = "Densidade"; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    //---Cálculo da Soma e Comparação---
    soma1 = valor1_A + valor1_B;
    soma2 = valor2_A + valor2_B;

    //---Exibição do Resultado---
    printf("\n*** RESULTADO DA RODADA ***\n");
    printf("Cartas: %s vs %s\n", cidade1, cidade2);
    printf("-------------------------------\n");
    printf("Atributo 1 (%s):\n", nomeAtributo1);
    printf(" - %s: %.2f | %s: %.2f\n", cidade1, valor1_A, cidade2, valor2_A);
    
    printf("Atributo 2 (%s):\n", nomeAtributo2);
    printf(" - %s: %.2f | %s: %.2f\n", cidade1, valor1_B, cidade2, valor2_B);
    
    printf("-------------------------------\n");
    printf("Soma Total:\n");
    printf(" - %s: %.2f\n", cidade1, soma1);
    printf(" - %s: %.2f\n", cidade2, soma2);
    printf("-------------------------------\n");

    //---Lógica de Vencedor usando Operador Ternário e If-Else---
    // Decidimos o vencedor da rodada final baseada na soma
    if (soma1 == soma2) {
        printf("Resultado Final: EMPATE!\n");
    } else {
        // Uso do Operador Ternário para definir o nome do vencedor
        // Se soma1 for maior, vencedor recebe cidade1, senão cidade2
        char* vencedor = (soma1 > soma2) ? cidade1 : cidade2;
        printf("VENCEDOR FINAL: %s!\n", vencedor);
    }

    printf("================================\n");

    return 0;
}

//-----------Função Cabeçalho
void cabecalho() {
    printf("===========================\n");
    printf("--- SUPER TRUNFO MESTRE ---\n");
    printf("===========================\n");
}