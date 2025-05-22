#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
struct Carta {
    char estado;
    char codigo [4];
    char nomeCidade [40];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     struct Carta carta1;
    struct Carta carta2;
    //cadastro das cartas

     //leitura da primeira carta
    printf("Desafio Super Trunfo!\n");
     printf("Digite os dados da primeira carta:\n");
      printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    //leitura da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
      printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo da carta (ex: B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição das informações da primeira carta
    printf("\n Informações da Primeira Carta \n");
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Numero de pontos turisticos: %d\n", carta1.pontosTuristicos);

      // Exibição das informações da segunda carta
    printf("\n Informações da Segunda Carta \n");
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Numero de pontos turisticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}
