#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m;

    printf("Digite sua idade: \n");
    scanf("%d", &m);

    if (m < 18){
        printf("Voce e de menor.\n");
        }
    else if (m < 65){
        printf("Voce e adulto.\n");
        }
    else{
        printf("Voce e idoso.\n"); 
        }

    // int m;

    // printf ("Digite sua idade: \n");
    // scanf("%d", &m);

    // if (m < 18){
    //     printf("Voce e de menor");
    // }

    // if (m >= 18 && m < 65){
    //    printf("Voce e adulto");
    //}

    // if (m >= 65){
    //     printf("Voce e idoso");
    // }

    //   float m;

    // printf("insira a nota!\n");
    // scanf("%f", &m);

    // if (m >= 4.0 && m <=7.0){
    // printf("tem direito a exame!\n");
    // }

    // if (m < 4.0 && m > -1){
    //  printf("Reprovado!\n");
    //}

    //   if(m > 7.0 && m < 11){
    //    printf("Aprovado!\n");
    //}

    //    if(m  10 && m < 0){
    //    printf("");
    //  } else {
    //    printf("Nota errada!\n");
    //}

    return 0;
}
