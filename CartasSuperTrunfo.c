#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado01, estado02, codigo01[5], codigo02[5], cidade01[10], cidade02[10];
  int populacao01, populacao02, turismo01, turismo02;
  float area01, area02, pib01, pib02;

  // Área para entrada de dados
  printf("Insira os dados da carta 01 abaixo: \n");
  printf("------------------------------------\n");

  printf("Estado: ");
  scanf(" %c", &estado01);

  printf("Código da Carta: ");
  scanf("%s", codigo01);

  printf("Nome da Cidade: ");
  scanf("%s", cidade01);

  printf("Polulação: ");
  scanf("%d", &populacao01);
  
  printf("Área KM²: ");
  scanf("%f", &area01);

  printf("PIB: ");
  scanf("%f", &pib01);

  printf("Pontos Turísticos: ");
  scanf("%d", &turismo01);

  printf("\n");

  printf("Insira os dados da carta 02 abaixo: \n");
  printf("------------------------------------\n");

  printf("Estado: ");
  scanf(" %c", &estado02);

  printf("Código da Carta: ");
  scanf("%s", codigo02);

  printf("Nome da Cidade: ");
  scanf("%s", cidade02);

  printf("Polulação: ");
  scanf("%d", &populacao02);
  
  printf("Área KM²: ");
  scanf("%f", &area02);

  printf("PIB: ");
  scanf("%f", &pib02);

  printf("Pontos Turísticos: ");
  scanf("%d", &turismo02);
  
  printf("\n");

  // Área para exibição dos dados da cidade
  printf("- Carta 01 -\n");
  printf("ESTADO: %c\n", estado01);
  printf("CÓDIGO: %s\n", codigo01);
  printf("NOME DA CIDADE: %s\n", cidade01);
  printf("POPULAÇÃO: %d\n", populacao01);
  printf("ÁREA: %f KM²\n", area01);
  printf("PIB: %f bilhões de reais\n", pib01);
  printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turismo01);

  printf("------------------------------------\n");

  printf("- Carta 02 -\n");
  printf("ESTADO: %c\n", estado02);
  printf("CÓDIGO: %s\n", codigo02);
  printf("NOME DA CIDADE: %s\n", cidade02);
  printf("POPULAÇÃO: %d\n", populacao02);
  printf("ÁREA: %f KM²\n", area02);
  printf("PIB: %f bilhões de reais\n", pib02);
  printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turismo02);
  
return 0;
}
