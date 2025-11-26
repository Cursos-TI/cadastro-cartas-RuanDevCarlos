#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado01, estado02, codigo01[5], codigo02[5], cidade01[10], cidade02[10];
  unsigned long int populacao01, populacao02;
  int turismo01, turismo02;
  float area01, area02, pib01, pib02, densidade01, densidade02, perCapita01, perCapita02, superPoder01, superPoder02;

  // Área para entrada de dados
  printf("Insira os dados da carta 01 abaixo: \n");
  printf("------------------------------------\n");

  printf("Estado: ");
  scanf(" %c", &estado01);

  printf("Código da Carta: ");
  scanf(" %s", codigo01);

  printf("Nome da Cidade: ");
  scanf(" %s", cidade01);

  printf("Polulação: ");
  scanf(" %d", &populacao01);

  printf("Área KM²: ");
  scanf(" %f", &area01);

  printf("PIB: ");
  scanf(" %f", &pib01);

  printf("Pontos Turísticos: ");
  scanf(" %d", &turismo01);

  densidade01 = (float)populacao01 / area01;
  perCapita01 = (float)(pib01 * 1000000000) / populacao01;
  superPoder01 = (float) (populacao01 + area01 + pib01 + turismo01 + perCapita01) - (densidade01);

  printf("\n");

  printf("Insira os dados da carta 02 abaixo: \n");
  printf("------------------------------------\n");

  printf("Estado: ");
  scanf(" %c", &estado02);

  printf("Código da Carta: ");
  scanf(" %s", codigo02);

  printf("Nome da Cidade: ");
  scanf(" %s", cidade02);

  printf("Polulação: ");
  scanf(" %d", &populacao02);

  printf("Área KM²: ");
  scanf(" %f", &area02);

  printf("PIB: ");
  scanf(" %f", &pib02);

  printf("Pontos Turísticos: ");
  scanf(" %d", &turismo02);

  densidade02 = (float)populacao02 / area02;
  perCapita02 = (float)(pib02 * 1000000000) / populacao02;
  superPoder02 = (float) (populacao02 + area02 + pib02 + turismo02 + perCapita02) - (densidade02);

  printf("\n");

  // Área para exibição dos dados da cidade
  printf("- Carta 01 -\n");
  printf("ESTADO: %c\n", estado01);
  printf("CÓDIGO: %s\n", codigo01);
  printf("NOME DA CIDADE: %s\n", cidade01);
  printf("POPULAÇÃO: %lu\n", populacao01);
  printf("ÁREA: %.2f KM²\n", area01);
  printf("PIB: %.2f bilhões de reais\n", pib01);
  printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turismo01);
  printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade01);
  printf("PIB PER CAPITA: %.2f reais\n", perCapita01);

  printf("------------------------------------\n");

  printf("- Carta 02 -\n");
  printf("ESTADO: %c\n", estado02);
  printf("CÓDIGO: %s\n", codigo02);
  printf("NOME DA CIDADE: %s\n", cidade02);
  printf("POPULAÇÃO: %lu\n", populacao02);
  printf("ÁREA: %.2f KM²\n", area02);
  printf("PIB: %.2f bilhões de reais\n", pib02);
  printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turismo02);
  printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade02);
  printf("PIB PER CAPITA: %.2f reais\n", perCapita02);

  printf("\n");

  printf("-- Comparação de Cartas --\n");
  printf("População: Carta 1 venceu? (%lu)\n", populacao01 > populacao02);
  printf("Área: Carta 1 venceu? (%f)\n", area01 > area02);
  printf("PIB: Carta 1 venceu (%f)\n", pib01 > pib02);
  printf("Pontos Turísticos: Cartas 1 venceu (%d)\n", turismo01 > turismo02);
  printf("Densidade Populacional: Carta 1 venceu (%f)\n", densidade01 > densidade02);
  printf("PIB per Capita: Carta 1 venceu (%f)\n", perCapita01 > perCapita02);
  printf("Super Poder: Carta 1 venceu (%f)\n", superPoder01 > superPoder02);

  return 0;
}
