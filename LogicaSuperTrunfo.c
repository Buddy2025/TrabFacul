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
    int opcao1, opcao2;

    printf("\n🌟 Escolha o primeiro atributo para comparar 🌟\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    do {
        printf("\n🌟 Escolha o segundo atributo (diferente do primeiro) 🌟\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - PIB per Capita\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao2);
    } while (opcao2 == opcao1); // Garante que o segundo atributo seja diferente do primeiro

    // 🔥 Comparação dos atributos
    float valor1 = 0, valor2 = 0;
    int vencedor1, vencedor2;

    switch (opcao1) {
        case 1: valor1 = carta1.populacao; valor2 = carta2.populacao; vencedor1 = (valor1 > valor2); break;
        case 2: valor1 = carta1.area; valor2 = carta2.area; vencedor1 = (valor1 > valor2); break;
        case 3: valor1 = carta1.PIB; valor2 = carta2.PIB; vencedor1 = (valor1 > valor2); break;
        case 4: valor1 = carta1.pontosTuristicos; valor2 = carta2.pontosTuristicos; vencedor1 = (valor1 > valor2); break;
        case 5: valor1 = carta1.densidadePopulacional; valor2 = carta2.densidadePopulacional; vencedor1 = (valor1 < valor2); break;
        case 6: valor1 = carta1.PIBperCapita; valor2 = carta2.PIBperCapita; vencedor1 = (valor1 > valor2); break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch (opcao2) {
        case 1: valor1 += carta1.populacao; valor2 += carta2.populacao; vencedor2 = (carta1.populacao > carta2.populacao); break;
        case 2: valor1 += carta1.area; valor2 += carta2.area; vencedor2 = (carta1.area > carta2.area); break;
        case 3: valor1 += carta1.PIB; valor2 += carta2.PIB; vencedor2 = (carta1.PIB > carta2.PIB); break;
        case 4: valor1 += carta1.pontosTuristicos; valor2 += carta2.pontosTuristicos; vencedor2 = (carta1.pontosTuristicos > carta2.pontosTuristicos); break;
        case 5: valor1 += carta1.densidadePopulacional; valor2 += carta2.densidadePopulacional; vencedor2 = (carta1.densidadePopulacional < carta2.densidadePopulacional); break;
        case 6: valor1 += carta1.PIBperCapita; valor2 += carta2.PIBperCapita; vencedor2 = (carta1.PIBperCapita > carta2.PIBperCapita); break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // 🔥 Exibição do resultado
    printf("\n🏆 Comparação de Cartas 🏆\n");
    printf("Atributo 1 (%d) - %s: %.2f | %s: %.2f\n", opcao1, carta1.nomeCidade, valor1, carta2.nomeCidade, valor2);
    printf("Atributo 2 (%d) - %s: %.2f | %s: %.2f\n", opcao2, carta1.nomeCidade, valor1, carta2.nomeCidade, valor2);

    printf("\n🔥 Resultados Individuais 🔥\n");
    printf("Vencedor no primeiro atributo: %s\n", vencedor1 ? carta1.nomeCidade : carta2.nomeCidade);
    printf("Vencedor no segundo atributo: %s\n", vencedor2 ? carta1.nomeCidade : carta2.nomeCidade);

    if (valor1 > valor2) {
        printf("🔥 Resultado Final: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (valor1 < valor2) {
        printf("🔥 Resultado Final: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("🔥 Resultado Final: Empate!\n");
    }

    return 0;
}
