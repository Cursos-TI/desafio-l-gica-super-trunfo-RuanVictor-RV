#include <stdio.h> // utilizado para printf, scanf

// Início do código
int main() {

    // Variáveis da carta 1
    char estado[5];
    char codigo[5];
    char cidade[50];
    int populacao;
    float areaPopulacional;
    int pontosTuristicos;
    float pib;

    // Variáveis para os cálculos de Densidade Populacional e PIB per capita da carta 1
    float densidadePopulacional;
    float pibPerCapita;

    // Introdução
    printf("Seja bem-vindo ao jogo do Super Trunfo! \n");
    printf("Vamos criar 2 cartas, tema: Estados do Brasil. \n");
    printf("\nCriação da carta 1: \n");
    
    // Pergunta sobre o estado da carta 1
    printf("Digite o estado da carta (A até H): \n");
    scanf("%s", estado);

    // Pergunta sobre o código do estado da carta 1
    printf("Digite o codigo deste estado (exemplo: A01, H04): \n");
    scanf("%s", codigo);

    // Pergunta sobre o nome da cidade da carta 1
    printf("Digite o nome da cidade (caso haja espaço, escrever junto): \n");
    scanf("%s", cidade);

    // Pergunta sobre a população da carta 1
    printf("Digite a população da cidade escolhida (em número inteiro, sem pontos): \n");
    scanf("%d", &populacao);

    // Pergunta sobre a área populacional da carta 1
    printf("Digite a área populacional da cidade em km² (Exemplo: 123.4 ou 1234.5): \n");
    scanf("%f", &areaPopulacional);

    // Pergunta sobre os pontos turísticos da carta 1
    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos);

    // Pergunta sobre o PIB da carta 1
    printf("Digite o PIB aproximado da cidade (Exemplo: 1234567.00 ou 1234567890.00): \n");
    scanf("%f", &pib);

    // Cálculos de Densidade Populacional e PIB per capita da carta 1
    densidadePopulacional = populacao / areaPopulacional;
    pibPerCapita = pib / populacao;

    //
    // Fim da carta 1 e início da carta 2
    //

    // Variáveis da carta 2
    char estado1[5];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float areaPopulacional1;
    int pontosTuristicos1;
    float pib1;

    // Variáveis para os cálculos da carta 2
    float densidadePopulacional1;
    float pibPerCapita1;

    // Introdução da carta 2
    printf("\nAgora vamos para a criação da carta 2: \n");
    printf("\nCriação da carta 2: \n");

    // Pergunta sobre o estado da carta 2
    printf("Digite o estado da carta (A até H): \n");
    scanf("%s", estado1);

    // Pergunta sobre o código do estado da carta 2
    printf("Digite o codigo deste estado (exemplo: A01, H04): \n");
    scanf("%s", codigo1);

    // Pergunta sobre o nome da cidade da carta 2
    printf("Digite o nome da cidade (caso haja espaço, escrever junto): \n");
    scanf("%s", cidade1);

    // Pergunta sobre a população da carta 2
    printf("Digite a população da cidade escolhida (em número inteiro, sem pontos): \n");
    scanf("%d", &populacao1);

    // Pergunta sobre a área populacional da carta 2
    printf("Digite a área populacional da cidade em km² (Exemplo: 123.4 ou 1234.5): \n");
    scanf("%f", &areaPopulacional1);

    // Pergunta sobre os pontos turísticos da carta 2
    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontosTuristicos1);

    // Pergunta sobre o PIB da carta 2
    printf("Digite o PIB aproximado da cidade (Exemplo: 1234567.00 ou 1234567890.00): \n");
    scanf("%f", &pib1);

    // Cálculos de Densidade Populacional e PIB per capita da carta 2
    densidadePopulacional1 = populacao1 / areaPopulacional1;
    pibPerCapita1 = pib1 / populacao1;

    // Exibição dos dados das cartas
    printf("\nExibição dos dados das cartas: \n");

    // Exibir os dados da carta 1
    printf("\n*Carta 1: *\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.1f km²\n", areaPopulacional);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("PIB: %.2f de reais\n", pib);
    printf("PIB per capita: %.2f\n", pibPerCapita);

    // Exibir os dados da carta 2
    printf("\n*Carta 2: *\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", areaPopulacional1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    // Comparação do atributo escolhido: PIB (Por exemplo)
    printf("\nComparação do PIB: \n");

    if (pib > pib1) {
        printf("Carta 1 (%s) tem um PIB maior: %.3f B/M de reais\n", cidade, pib);
    } else if (pib < pib1) {
        printf("Carta 2 (%s) tem um PIB maior: %.3f B/M de reais\n", cidade1, pib1);
    } else {
        printf("Ambas cartas têm o mesmo PIB: %.3f \n B/M de reais", pib);
    }

    return 0;
}