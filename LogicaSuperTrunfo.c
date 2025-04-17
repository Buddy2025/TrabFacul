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

    // 🔥 Comparação baseada no PIB (Escolhido no código)
    printf("\n🏆 Comparação de Cartas (Atributo: PIB) 🏆\n");
    printf("Carta 1 - %s: R$ %.1f bilhões\n", carta1.nomeCidade, carta1.PIB);
    printf("Carta 2 - %s: R$ %.1f bilhões\n", carta2.nomeCidade, carta2.PIB);

    if (carta1.PIB > carta2.PIB) {
        printf("🔹 Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta1.PIB < carta2.PIB) {
        printf("🔹 Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("🔹 Resultado: Empate!\n");
    }

    return 0;
}
