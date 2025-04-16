#include <stdio.h>
#include <string.h>

// Estrutura da carta do Super Trunfo
typedef struct {
    char estado[20];       // Estado representado por nome completo
    char codigo[5];        // Código da carta (ex: A01, B03)
    char nomeCidade[50];   // Nome da cidade
    unsigned long int populacao; // Número de habitantes
    float area;            // Área em km²
    float PIB;             // Produto Interno Bruto (bilhões de reais)
    int pontosTuristicos;  // Número de pontos turísticos
    float densidadePopulacional; // População / Área
    float PIBperCapita;    // PIB / População
    float superPoder;      // Soma dos atributos numéricos
} CartaSuperTrunfo;

int main() {
    // Declaração das cartas
    CartaSuperTrunfo carta1, carta2;

    // Inicialização da primeira carta
    strcpy(carta1.estado, "Paraná");
    strcpy(carta1.codigo, "A1");
    strcpy(carta1.nomeCidade, "Curitiba");
    carta1.populacao = 3559366;
    carta1.area = 435.277;
    carta1.PIB = 192.7;
    carta1.pontosTuristicos = 59;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.PIBperCapita = carta1.PIB / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.PIB + carta1.pontosTuristicos + carta1.PIBperCapita + (1 / carta1.densidadePopulacional);

    // Inicialização da segunda carta
    strcpy(carta2.estado, "Minas Gerais");
    strcpy(carta2.codigo, "B1");
    strcpy(carta2.nomeCidade, "Belo Horizonte");
    carta2.populacao = 21322691;
    carta2.area = 331.354;
    carta2.PIB = 1060.0;
    carta2.pontosTuristicos = 45;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.PIBperCapita = carta2.PIB / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.PIB + carta2.pontosTuristicos + carta2.PIBperCapita + (1 / carta2.densidadePopulacional);

    // Exibição das informações das cartas
    printf("\n🔥 Informações das Cartas 🔥\n");

    printf("\n🔹 Carta 1\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu habitantes\n", carta1.populacao);
    printf("Área: %.3f km²\n", carta1.area);
    printf("PIB: R$ %.1f bilhões\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1.PIBperCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n🔹 Carta 2\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu habitantes\n", carta2.populacao);
    printf("Área: %.3f km²\n", carta2.area);
    printf("PIB: R$ %.1f bilhões\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta2.PIBperCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparação das cartas
    printf("\n🏆 Batalha de Cartas 🏆\n");
    printf("População: %d\n", carta1.populacao > carta2.populacao);
    printf("Área: %d\n", carta1.area > carta2.area);
    printf("PIB: %d\n", carta1.PIB > carta2.PIB);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: %d\n", carta1.densidadePopulacional < carta2.densidadePopulacional);
    printf("PIB per Capita: %d\n", carta1.PIBperCapita > carta2.PIBperCapita);
    printf("Super Poder: %d\n", carta1.superPoder > carta2.superPoder);

    return 0;
}
