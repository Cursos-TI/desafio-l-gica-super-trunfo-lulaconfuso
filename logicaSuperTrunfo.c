#include <stdio.h>

int main() {
    // Declaração de variáveis da carta 1
    char estado1[30], codigo1[5], cidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Declaração de variáveis da carta 2
    char estado2[30], codigo2[5], cidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // --- Entrada de dados da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Codigo da carta: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de dados da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo da carta: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos automáticos ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Escolha do atributo para comparação ---
    int atributo;
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &atributo);

    printf("\n=== COMPARACAO DE CARTAS SUPER TRUNFO ===\n\n");

    // --- Estrutura de decisão if/else ---
    if (atributo == 1) {
        printf("Comparação de cartas (Atributo: População)\n\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributo == 2) {
        printf("Comparação de cartas (Atributo: Área)\n\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n\n", cidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributo == 3) {
        printf("Comparação de cartas (Atributo: PIB)\n\n");
        printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n\n", cidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributo == 4) {
        printf("Comparação de cartas (Atributo: Densidade Populacional)\n\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n\n", cidade2, estado2, densidade2);

        // Menor densidade vence
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else if (atributo == 5) {
        printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");
        printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): R$ %.2f\n\n", cidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

    } else {
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}