#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "pt-BR");

    int v[5];
    int i;
    float s = 0;
    char condic;


    for(i=0;i<5;i++){
        printf("Digite um valor: \n");
        scanf("%d", &v[i]);
    }
    system("cls");
    printf("Valores digitados: ");
    for(i=0;i<5;i++){
        printf("%d ", v[i]);
    }
    for(i=0;i<5;i++){
        s += v[i];
    }

    printf("\nQuer saber a media desses valores? (Y/N) ");
    scanf("%s", &condic);
    printf("\n");

    if(condic == 'y' || condic == 'Y'){
        printf("Soma dos valores: %.2f\n", s);
        printf("Media dos valores: %.2f \n", s/5);
    }
    else if(condic == 'n' || condic == 'N'){
        printf("A soma dos valores é: %.2f\n", s);
    } else {
        printf("Apenas Y or N\n");
    }
    printf("\n");
    
    return 0;
}