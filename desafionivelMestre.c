#include <stdio.h>

int main() {
    // --- Cartas pré-cadastradas ---
    char pais1[30] = "Brasil";
    int populacao1 = 214000;
    float area1 = 8515767.0;
    float pib1 = 246.0; // em bilhões
    int pontosTuristicos1 = 20;
    float densidade1 = populacao1 / area1;

    char pais2[30] = "Argentina";
    int populacao2 = 45600000;
    float area2 = 2780400.0;
    float pib2 = 632.0; // em bilhões
    int pontosTuristicos2 = 25;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;

    // --- Menu 1: escolha do primeiro atributo ---
    printf("===== SUPER TRUNFO - COMPARACAO AVANCADA =====\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // --- Menu 2: escolha do segundo atributo (sem repetir o primeiro) ---
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue; // pula o atributo já escolhido
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Numero de pontos turisticos\n"); break;
            case 5: printf("5 - Densidade demografica\n"); break;
        }
    }
    printf("Opcao: ");
    scanf("%d", &atributo2);

    // --- Validação para impedir repetição ---
    if (atributo1 == atributo2) {
        printf("\n❌ Erro: os atributos devem ser diferentes!\n");
        return 0;
    }

    // --- Função auxiliar: define o valor do atributo escolhido ---
    switch (atributo1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontosTuristicos1;
            valor1_carta2 = pontosTuristicos2;
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        default:
            printf("Atributo invalido!\n");
            return 0;
    }

    switch (atributo2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontosTuristicos1;
            valor2_carta2 = pontosTuristicos2;
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        default:
            printf("Atributo invalido!\n");
            return 0;
    }

    // --- Regras de comparação ---
    // Densidade demográfica (menor vence), outros (maior vence)
    float resultado1 = (atributo1 == 5)
        ? (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta1 > valor1_carta2 ? 2 : 0))
        : (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta1 < valor1_carta2 ? 2 : 0));

    float resultado2 = (atributo2 == 5)
        ? (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta1 > valor2_carta2 ? 2 : 0))
        : (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta1 < valor2_carta2 ? 2 : 0));

    // --- Soma dos atributos (quanto maior, melhor) ---
    // Densidade demográfica: inverte o valor (quanto menor, mais vantagem)
    float valor1_soma = (atributo1 == 5) ? (1 / valor1_carta1) : valor1_carta1;
    float valor2_soma = (atributo2 == 5) ? (1 / valor2_carta1) : valor2_carta1;
    float valor3_soma = (atributo1 == 5) ? (1 / valor1_carta2) : valor1_carta2;
    float valor4_soma = (atributo2 == 5) ? (1 / valor2_carta2) : valor2_carta2;

    somaCarta1 = valor1_soma + valor2_soma;
    somaCarta2 = valor3_soma + valor4_soma;

    // --- Exibição dos resultados ---
    printf("\n=== RESULTADO FINAL ===\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Atributos escolhidos: %d e %d\n\n", atributo1, atributo2);
    printf("Valores da carta 1: %.2f e %.2f\n", valor1_carta1, valor2_carta1);
    printf("Valores da carta 2: %.2f e %.2f\n\n", valor1_carta2, valor2_carta2);

    printf("Soma final da carta 1: %.2f\n", somaCarta1);
    printf("Soma final da carta 2: %.2f\n\n", somaCarta2);

    // --- Determina o vencedor (usando operador ternário) ---
    (somaCarta1 > somaCarta2) ? printf("🏆 Vencedor: %s!\n", pais1)
    : (somaCarta2 > somaCarta1) ? printf("🏆 Vencedor: %s!\n", pais2)
    : printf("⚖️ Empate!\n");

    return 0;
}
