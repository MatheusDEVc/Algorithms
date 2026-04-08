#include <stdlib.h>
#include <stdio.h>

int main(){
  
  int numero1, numero2, soma, subtr, mult, divis;
  
  printf("Digite o primeiro valor:\n");
  scanf("%d", &numero1);
  printf("Digite o segundo valor:\n");
  scanf("%d", &numero2);

  soma = numero1 + numero2;
  subtr = numero1 - numero2;
  mult = numero1 * numero2;
  divis = numero1 / numero2;

  printf("Resultados:\n");
  printf("Soma: %d\n", soma);
  printf("subtr: %d\n", subtr);
  printf("mult: %d\n", mult);
  printf("divis: %d\n", divis);

  return 0; 
}