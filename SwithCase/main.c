#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int m;

    printf("escolha um numero de 1 a 7 para imprimir um dia da semana: ");
    scanf("%d", &m);

    switch (m){
    
        case 1:
            printf("domingo\n");
        break;

        case 2:
            printf("segunda\n");
        break;

        case 3:
            printf("terca\n");
        break;

        case 4:
            printf("quarta\n");
        break;

        case 5:
            printf("quinta\n");
        break;

        case 6:
            printf("sexta\n");
        break;

        case 7:
            printf("sabado\n");
        break;

     default:
        printf("eu gostaria de merendar\n");
        break;
    }

}










// int main ()
// {
// int a;
// printf ("Digite um valor de 1 a 7: ");
// scanf("%d", &a);
// // A estrutura switch case � feita para gerar uma sele��o para cada valor poss�vel de uma vari�vel
// // Cada caso ter� um bloco de c�digo para ser executado depois do : e que se executa em cascata
// // Caso voc� utilize a palavra �break�, a estrutura � encerrada
// // Default serve para entregar uma a��o quando n�o haja nenhum case sendo satisfeito
// switch ( a ){

// case 1 :
// printf ("\nDomingo");
// break;

// case 2 :
// printf ("\nSegunda");
// break;

// case 3 :
// printf ("\nTer�a");
// break;

// case 4 :
// printf ("\nQuarta");
// break;

// case 5 :
// printf ("\nQuinta");
// break;

// case 6 :
// printf ("\nSexta");
// break;

// case 7 :
// printf ("\nSabado");
// break;

// default :
// printf ("\nIsso seria algum tipo de piada? hahaha\n\n@theuzz.dz9\n");
// }
// return 0;
// }
