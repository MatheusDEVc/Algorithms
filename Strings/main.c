#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char v[N];
    int i;

    printf("Digite um texto: \n");
    fgets(v, N, stdin);
    i = strlen(v);

    printf("Quantidade de carateres digitados: %d\n\n", i);

    printf("impress�o posi��o a posi��o:\n");
    for(i=0; i<strlen(v); i++){
        printf("%c", v[i]);       v
    } 


    return 0;
}