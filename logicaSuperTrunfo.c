#include <stdio.h>

int main() {

    // --- Cadastro da Carta 1 ---
    char estado1[30] = "São Paulo";
    char codigo1[5] = "A01";
    char cidade1[30] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28; // PIB em bilhões
    int pontosTuristicos1 = 25;

    // --- Cadastro da Carta 2 ---
    char estado2[30] = "Rio de Janeiro";
    char codigo2[5] = "A02";
    char cidade2[30] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.27;
    float pib2 = 964.00; // PIB em bilhões
    int pontosTuristicos2 = 18;

    // --- Cálculos automáticos ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- Escolha do atributo para comparação ---
    // Opções:
    // 1 - População
    // 2 - Área
    // 3 - PIB
    // 4 - Densidade Populacional
    // 5 - PIB per Capita
    int atributo = 5; // Altere este número para mudar o atributo comparado

    printf("=== COMPARACAO DE CARTAS SUPER TRUNFO ===\n\n");

    // --- Comparação utilizando if e if-else ---
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
    }

    return 0;
}
