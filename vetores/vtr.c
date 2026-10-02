#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int main (void){
    setlocale(LC_ALL, "pt-br");


    int v[MAX];
    int i;
    float s = 0;

    for(i=0; i<MAX; i++){
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    };

    for(i=0; i<MAX; i++){
        s += v[i];
    };
    

    printf("Resultado: %.2f ", s / 5);


    /* int v[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for(i=0; i<5; i++){
        s += v[i];
    };

    printf("Resultado: %.2f ", s / 5); */

    /* int v[5];
    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado: %.2f", m); */

        return 0;

    }
