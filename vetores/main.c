#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt-br");

int v[5];
int i;

    for(i=0;i<5;i++){
        printf("Insira um valor: \n");
        scanf("%d", &v[i]);
    }
    printf("Dados inseridos:\n");

    for(i=0;i<5;i++){
        printf("%d ", v[i]);
    }
    printf("\n---------------\n");





//    int v[15];
//    int i;

//     for(i=0; i<15; i++){
//         printf("insira um dado:\n");
//         scanf("%d", &v[i]);
    
//     }
   
//     printf("dados inseridos:\n");
//     for(i=0; i<15; i++){
//         printf("%d ", v[i]/5);
        

//     }
   
   
   
   
   
   
   
   
    // int v[5] = {10, 38, 59, 81, 93};                 //opcao mais rapida de codar vetores
    // int i;
    // float m = 0;

    //     for(i=0; i<5; i++){
    //         m += v[i];
    //      }

    //      printf("resultado: %.2f\n", m/5);
    

    


    // int v[5];
    
    // float m;

    // v[0] = 38;                      //segunda opcao para codar vetores
    // v[1] = 81;
    // v[2] = 93;
    // v[3] = 10;
    // v[4] = 59;

    // m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    //     printf("resultado: %.2f", m);


}
