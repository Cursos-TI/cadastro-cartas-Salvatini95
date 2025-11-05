#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //var carta 01  
  char codigo[4];
  int  populacao1;
  float area1;
  float pib1;
  int pontos1;

   //var carta 02
  char codigo2[4];
  int  populacao2;
  float area2;
  float pib2;
  int pontos2;

  printf("===== SUPER TRUNFO - NIVEL NOVATO =====\n\n");

  // Área para entrada de dados
  //cadastro carta 01
  printf("Digite o codigo a cidade (ex: A01): ");
  scanf("%s", codigo);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Area (Km²): ");
  scanf("%f", &area1);

  printf("PIB (Em Bilhões): \n");
  scanf("%f", &pib1);

  printf("Pontos Turisticos: ");
  scanf("%s", &pontos1);

  printf("\n--------------------------------------\n\n");

  // Área para exibição dos dados da cidade

return 0;
} 
