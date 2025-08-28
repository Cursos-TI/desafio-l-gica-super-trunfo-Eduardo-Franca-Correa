#include <stdio.h>

int main() {
    // Estado pode ter 2 letras (ex.: ES, SP) + '\0'
    char estado1[3], estado2[3];

    // Código da carta (ex.: A01) + '\0'
    char codigo1[4], codigo2[4];

    // Nome da cidade (até 49 caracteres + '\0')
    char cidade1[50], cidade2[50];

    // População agora é unsigned long int (para números maiores)
    unsigned long int populacao1, populacao2;

    // Pontos turísticos é inteiro
    int pontos1, pontos2;

    // Área e PIB com casas decimais
    float area1, area2;
    float pib1, pib2;

    /* ================= CARTA 1 ================= */
    printf("=== SUPER TRUNFO - CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado da Carta 1 (ex: ES): \n");
    scanf(" %2s", estado1);

    printf("Digite o código da Carta 1 (ex: A01): \n");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a população da Carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos da Carta 1: \n");
    scanf("%d", &pontos1);

    /* ================= CARTA 2 ================= */
    printf("\n=== SUPER TRUNFO - CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado da Carta 2 (ex: SP): \n");
    scanf(" %2s", estado2);

    printf("Digite o código da Carta 2 (ex: B02): \n");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade da Carta 2: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a população da Carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da Carta 2: \n");
    scanf("%d", &pontos2);

    /* ================= CÁLCULOS ================= */
    // Densidade Populacional = população / área
    float densidadePopulacional1 = (float)populacao1 / area1;
    float densidadePopulacional2 = (float)populacao2 / area2;

    // PIB per Capita = PIB / população
    float pibPerCapita1 = pib1 / (float)populacao1;
    float pibPerCapita2 = pib2 / (float)populacao2;

    /* ================= SAÍDA: DADOS DAS CARTAS ================= */
    printf("\n=== SUPER TRUNFO - DADOS DAS CARTAS ===\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f reais\n", pibPerCapita2);

    /* ================= COMPARAÇÃO E RESULTADO ================= */
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Atributo escolhido: População\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    
    // Determinar qual carta vence na comparação de população
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}