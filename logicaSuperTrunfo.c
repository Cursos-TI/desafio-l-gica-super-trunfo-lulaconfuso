
#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[3];
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1, carta2;

    // ===== Cadastro da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (sigla): ");
    scanf("%s", carta1.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);

    // Calculando atributos derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // ===== Cadastro da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (sigla): ");
    scanf("%s", carta2.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
   
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
     printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);

    // Calculando atributos derivados
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===== Comparação de Atributos =====
    // Alterar aqui o atributo que será comparado:
    // Opções: populacao, area, pib, densidadePopulacional, pibPerCapita
    char atributoEscolhido[] = "populacao";

    printf("\n=== Comparação de cartas (Atributo: %s) ===\n", atributoEscolhido);

    if (strcmp(atributoEscolhido, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        }
    }
    else if (strcmp(atributoEscolhido, "area") == 0) {
        printf("Carta 1 - %s (%s): %.2f km²\n", carta1.nome, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km²\n", carta2.nome, carta2.estado, carta2.area);

        if (carta1.area > carta2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        }
    }
    else if (strcmp(atributoEscolhido, "pib") == 0) {
        printf("Carta 1 - %s (%s): %.2f bilhões\n", carta1.nome, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", carta2.nome, carta2.estado, carta2.pib);

        if (carta1.pib > carta2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        }
    }
    else if (strcmp(atributoEscolhido, "densidadePopulacional") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nome, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.nome, carta2.estado, carta2.densidadePopulacional);

        if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
            printf("Resultado: Carta 1 (%s) venceu (menor densidade)!\n", carta1.nome);
        } else {
            printf("Resultado: Carta 2 (%s) venceu (menor densidade)!\n", carta2.nome);
        }
    }
    else if (strcmp(atributoEscolhido, "pibPerCapita") == 0) {
        printf("Carta 1 - %s (%s): %.6f\n", carta1.nome, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.6f\n", carta2.nome, carta2.estado, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
        }
    }

    return 0;
}
