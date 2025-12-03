#include <stdio.h>

// Desafio Super Trunfo - Países

// Função para limpar o buffer do teclado
// Remove caracteres extras (como \n) que ficam no buffer após usar scanf
void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Dados básicos das cartas (caracteres e strings)
  char estado01, estado02;              
  char codigo01[10], codigo02[10];    
  char cidade01[10], cidade02[10];     
  
  // Dados numéricos das cidades
  unsigned long int populacao01, populacao02;  
  int turismo01, turismo02;            
  float area01, area02;              
  float pib01, pib02;                  
  
  // Dados calculados
  float densidade01, densidade02;     
  float perCapita01, perCapita02;        
  float superPoder01, superPoder02;    

  // =============================================
  // ENTRADA DE DADOS - CARTA 01
  // =============================================
  printf("Insira os dados da carta 01 abaixo: \n");
  printf("------------------------------------\n");

  printf("Estado: ");
  scanf(" %c", &estado01);      
  limparBuffer();              

  printf("Código da Carta: ");
  scanf("%s", codigo01);       
  limparBuffer();             

  printf("Nome da Cidade: ");
  scanf("%s", cidade01);       
  limparBuffer();             

  printf("Polulação: ");
  scanf("%lu", &populacao01);  
  limparBuffer();              

  printf("Área KM²: ");
  scanf("%f", &area01);        
  limparBuffer();            

  printf("PIB: ");
  scanf("%f", &pib01);       
  limparBuffer();             

  printf("Pontos Turísticos: ");
  scanf("%d", &turismo01);     
  limparBuffer();               

  // CÁLCULOS PARA CARTA 01
  densidade01 = (float)populacao01 / area01;                          
  perCapita01 = (float)(pib01 * 1000000000) / populacao01;           
  superPoder01 = (float)(populacao01 + area01 + pib01 + turismo01 + perCapita01) - (densidade01); 

  printf("\n");  

  // =============================================
  // ENTRADA DE DADOS - CARTA 02
  // =============================================
  printf("Insira os dados da carta 02 abaixo: \n");
  printf("------------------------------------\n");

  printf("Estado: ");
  scanf("%c", &estado02);      
  limparBuffer();             

  printf("Código da Carta: ");
  scanf("%s", codigo02);        
  limparBuffer();              

  printf("Nome da Cidade: ");
  scanf("%s", cidade02);       
  limparBuffer();              

  printf("Polulação: ");
  scanf("%lu", &populacao02);  
  limparBuffer();              

  printf("Área KM²: ");
  scanf("%f", &area02);        
  limparBuffer();              

  printf("PIB: ");
  scanf("%f", &pib02);        
  limparBuffer();             

  printf("Pontos Turísticos: ");
  scanf("%d", &turismo02);    
  limparBuffer();              

  // CÁLCULOS PARA CARTA 02
  densidade02 = (float)populacao02 / area02;                          
  perCapita02 = (float)(pib02 * 1000000000) / populacao02;           
  superPoder02 = (float)(populacao02 + area02 + pib02 + turismo02 + perCapita02) - (densidade02);  

  printf("\n");  

  // =============================================
  // EXIBIÇÃO DOS DADOS DAS CARTAS
  // =============================================
  
  // DETALHES DA CARTA 01
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

  // DETALHES DA CARTA 02
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

  // =============================================
  // COMPARAÇÃO ENTRE AS CARTAS
  // =============================================
  printf("-- Comparação de Cartas --\n");
  printf("População: Carta 1 venceu? (%d)\n", populacao01 > populacao02);           
  printf("Área: Carta 1 venceu? (%.0f)\n", area01 > area02);             
  printf("PIB: Carta 1 venceu (%.0f)\n", pib01 > pib02);                         
  printf("Pontos Turísticos: Cartas 1 venceu (%d)\n", turismo01 > turismo02);     
  printf("Densidade Populacional: Carta 1 venceu (%.0f)\n", densidade01 > densidade02); 
  printf("PIB per Capita: Carta 1 venceu (%.0f)\n", perCapita01 > perCapita02);    
  printf("Super Poder: Carta 1 venceu (%.0f)\n", superPoder01 > superPoder02);

  printf("\n");
  printf("------------------------------------\n"); 

  // =============================================
  // COMPARAÇÃO DE ATRIBUTO ESPECÍFICO
  // =============================================

  printf("-- COMPARAÇÃO DE CARTAS (ATRIBUTO: turismo): --\n");
  printf("Carta 01 - %s: %d\n", cidade01, turismo01);
  printf("Carta 02 - %s: %d\n", cidade02, turismo02);
  
  if (turismo01 > turismo02){
    printf("Resultado: Carta 01 (%s) venceu!", cidade01);
  } else {
    printf("Resultado: Carta 02 (%s) venceu!", cidade02);
  }

  return 0;  
}