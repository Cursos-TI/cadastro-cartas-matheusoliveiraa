#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Super Trunfo - Cartas\n");
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
char Estado1 = 'A';
char Código1[10] = "A01";
char Cidade1[30] = "Campos dos Goytacazes";
int População1 = 519011;
float Área1 = 4032.0;
float PIB1 = 37.18;
int Pontos_turísticos1 = 15;
char Estado2 = 'B';
char Código2[10] = "B02";
char Cidade2[30] = "Osasco";
int População2 = 756952;
float Área2 = 693.4;
float PIB2 = 86.1;
int Pontos_turísticos2 = 20;





// Área para entrada de dados
printf ("Carta 1:\n");
printf ("Estado: %c\n", Estado1);
printf ("Código: %s\n", Código1);
printf ("Nome da Cidade: %s\n", Cidade1);
printf ("População: %d\n", População1);
printf ("Área: %.1f km²\n", Área1);
printf ("PIB: %.2f bilhões de reais\n", PIB1);
printf ("Número de Pontos Turísticos: %d\n", Pontos_turísticos1);

printf ("Carta 2:\n");
printf ("Estado: %c\n", Estado2);
printf ("Código: %s\n", Código2);
printf ("Nome da Cidade: %s\n", Cidade2);
printf ("População: %d\n", População2);
printf ("Área: %.1f km²\n", Área2);
printf ("PIB: %.1f bilhões de reais\n", PIB2);
printf ("Número de Pontos Turísticos: %d\n", Pontos_turísticos2);


  // Área para exibição dos dados da cidade

return 0;
} 
