#include <stdio.h>
#include <string.h>

// Estrutura da carta do Super Trunfo
typedef struct {
    char estado[20];       
    char codigo[5];        
    char nomeCidade[50];   
    unsigned long int populacao;  
    float area;            
    float PIB;             
    int pontosTuristicos;  
    float densidadePopulacional; 
    float PIBperCapita;    
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

    // 🔥 Menu interativo
    int opcao;
    printf("\n🌟 Escolha o atributo para comparar 🌟\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    // 🔥 Lógica de comparação
    printf("\n🏆 Comparação de Cartas 🏆\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %lu habitantes\n", carta1.nomeCidade, carta1.populacao);
            printf("Carta 2 - %s: %lu habitantes\n", carta2.nomeCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.3f km²\n", carta1.nomeCidade, carta1.area);
            printf("Carta 2 - %s: %.3f km²\n", carta2.nomeCidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta1.area < carta2.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: R$ %.1f bilhões\n", carta1.nomeCidade, carta1.PIB);
            printf("Carta 2 - %s: R$ %.1f bilhões\n", carta2.nomeCidade, carta2.PIB);
            if (carta1.PIB > carta2.PIB) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta1.PIB < carta2.PIB) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("Carta 2 - %s: %d pontos\n", carta2.nomeCidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional);
            printf("Carta 2 - %s: %.2f hab/km²\n", carta2.nomeCidade, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: R$ %.2f\n", carta1.nomeCidade, carta1.PIBperCapita);
            printf("Carta 2 - %s: R$ %.2f\n", carta2.nomeCidade, carta2.PIBperCapita);
            if (carta1.PIBperCapita > carta2.PIBperCapita) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta1.PIBperCapita < carta2.PIBperCapita) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
    }

    return 0;
}
