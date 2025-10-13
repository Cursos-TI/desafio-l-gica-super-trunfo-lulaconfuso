#include <stdio.h>
#include <string.h>

int main() {
    // --- Declaração das cartas ---
    char pais1[30] = "Brasil";
    int populacao1 = 504000000;
    float area1 = 8515767.0;
    float pib1 = 2493.0; // em bilhões
    int pontosTuristicos1 = 15;
    float densidade1 = populacao1 / area1;

    char pais2[30] = "Argentina";
    int populacao2 = 504000000;
    float area2 = 2780400.0;
    float pib2 = 632.0; // em bilhões
    int pontosTuristicos2 = 15;
    float densidade2 = populacao2 / area2;

    int opcao;

    // --- Menu interativo ---
    printf("===== SUPER TRUNFO - COMPARACAO DE CARTAS =====\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n\n");

    // --- Estrutura switch para escolher o atributo ---
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n\n", pais2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s!\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);

            if (area1 > area2)
                printf("Vencedor: %s!\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s!\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Numero de pontos turisticos\n");
            printf("%s: %d pontos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos\n\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s!\n", pais1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade demografica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n\n", pais2, densidade2);

            // Regra invertida: menor densidade vence
            if (densidade1 < densidade2)
                printf("Vencedor: %s!\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s!\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
