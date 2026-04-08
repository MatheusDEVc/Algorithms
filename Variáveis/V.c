#include <stdio.h>
#define texto "Entrada de dados"

int main(void){

  int idade = 0;
  float altura = 0.0;
  char nome [50] = "";

    printf("%s\n", texto);

    printf("Insira sua idade\n");
    scanf("%d", &idade);

    printf("Insira sua altura \n");
    scanf("%f", &altura);

    printf("Insira seu nome\n");
    scanf("%s", &nome);

    printf("Dados informados:\n");
    printf("Idade %d\n", idade);
    printf("Altura %.2f\n", altura);
    printf("Nome %s\n", nome);


   return 0;
}
