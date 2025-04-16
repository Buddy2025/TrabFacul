#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char estado;            // Estado representado por uma letra de 'A' a 'H'
    char codigo[5];         // Código da carta (ex: A01, B03)
    char nomeCidade[50];    // Nome da cidade
    int populacao;          // Número de habitantes
    float area;             // Área em km²
    float PIB;              // Produto Interno Bruto (bilhões de reais)
    int pontosTuristicos;   // Número de pontos turísticos
} CartaSuperTrunfo;

int main() {
    // Declaração das cartas
    CartaSuperTrunfo carta1, carta2;

    // Inicialização da primeira carta
    carta1.estado = 'A';
    strcpy(carta1.codigo, "A1");
    strcpy(carta1.nomeCidade, "Curitiba");
    carta1.populacao = 3559366;
    carta1.area = 435.277;
    carta1.PIB = 192.7;
    carta1.pontosTuristicos = 59;

    // Inicialização da segunda carta
    carta2.estado = 'B';
    strcpy(carta2.codigo, "B1");
    strcpy(carta2.nomeCidade, "Belo Horizonte");
    carta2.populacao = 21322691;
    carta2.area = 331.354;
    carta2.PIB = 1060.0;
    carta2.pontosTuristicos = 45;

    // Exibição das informações das cartas
    printf("\n🔥 Informações das Cartas 🔥\n");

    printf("\n🔹 Carta 1\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.3f km²\n", carta1.area);
    printf("PIB: R$ %.1f bilhões\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n🔹 Carta 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.3f km²\n", carta2.area);
    printf("PIB: R$ %.1f bilhões\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
