#include <stdio.h>

int main(){
    
//declaração das variáveis da carta 1
    
    char estado;
    char codigo_da_carta[50], nome_da_cidade[50];
    int populacao, qnt_ponto_turistico;
    float area, pib;

//Mensagem de instrução para o usuário
    
    printf("\nBem vindo ao Super Trunfo de Paises!\n\n");
    printf("Faca o registro da sua primeira carta:\n\n");

//Registro da primeira carta
    
    printf("Estado (Uma letra de 'A' a 'H', representando um dos oito estados):\n");
    scanf("%c", &estado);

    printf("Codigo da carta:\n");
    scanf(" %s", &codigo_da_carta);

    printf("Nome da cidade:\n");
    scanf(" %s", &nome_da_cidade);

    printf("Populacao:\n");
    scanf(" %d", &populacao);

    printf("Area:\n");
    scanf(" %f", &area);

    printf("PIB:\n");
    scanf(" %f", &pib);

    printf("Numeros de pontos turisticos:\n");
    scanf(" %d", &qnt_ponto_turistico);

//Mensagem de instrução para o usuário
    
    printf("Carta 1 registrada!!\n\nAgora vamos registrar a carta 2\n\n");

//Declaração das variáveis da carta 2
    
    char estado2;
    char codigo_da_carta2[5], nome_da_cidade2[5];
    int populacao2, qnt_ponto_turistico2;
    float area2, pib2;

//Registro da carta 2
    
    printf("Estado (Uma letra de 'A' a 'H', representando um dos oito estados):\n");
    scanf(" %c", &estado2);

    printf("Codigo da carta:\n");
    scanf(" %s", &codigo_da_carta2);

    printf("Nome da cidade:\n");
    scanf(" %s", &nome_da_cidade2);

    printf("Populacao:\n");
    scanf(" %d", &populacao2);

    printf("Area:\n");
    scanf(" %f", &area2);

    printf("PIB:\n");
    scanf(" %f", &pib2);

    printf("Numeros de pontos turisticos:\n");
    scanf(" %d", &qnt_ponto_turistico2);
  
//Exibição dos dados fornecidos pelo usuário
   
    printf("\nCarta 2 registrada com sucesso!\nEssas sao suas cartas!\nCarta1\n\n");

    printf(" Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n Populacao: %d\n Area: %fkm\n PIB: %f\n Numeros de pontos turisticos: %d\n\n", estado, codigo_da_carta, nome_da_cidade, populacao, area, pib, qnt_ponto_turistico);
    
    printf("Carta 2\n\n");
    
    printf(" Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n Populacao: %d\n Area: %fkm\n PIB: %f\n Numeros de pontos turisticos: %d\n", estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2, pib2, qnt_ponto_turistico2);

    return 0
}
