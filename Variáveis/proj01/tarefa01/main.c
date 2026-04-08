#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int idade;
    char objetivo[30];

    printf("Qual o seu nome: \n");
    scanf("%s", &nome);
    printf("Qual sua idade: \n");
    scanf("%i", &idade);
    printf("Qual seu objetivo: \n");
    scanf("%s", &objetivo);
    printf("Seu nome e %s. E voce tem %i anos. E seu objetivo e %s.", nome, idade, objetivo);


    return(0);

}
