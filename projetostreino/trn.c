#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "pt-BR");

    int a, b;
    char c;    
    printf("Digite o primeiro valor: \n");
    scanf(" %d", &a);
    fflush(stdin);
    printf("Digite o segundo valor: \n");
    scanf(" %d", &b);
    fflush(stdin);

    printf("Valores digitados: (%d) & (%d)\n\n", a, b);
    printf("Agora faça uma escolha uma operação matemática para fazer com estes dois valores. Utilizando estes sinais:\n Soma(+)\n Subtração(-)\n Divisão(/)\n Multiplicação(*)\n \n");
    scanf(" %c", &c);

    switch (c){

        case '+':
        printf("%d\n", a + b);
        break;

        case '-':
        printf("%d\n", a - b);
        break;

        case '/':
            if(b != 0){
                printf("%d\n", a / b);
            }
            else{
                printf("Erro: Divisão por zero!\n");
            }
            
        break;

        case '*':
        printf("%d\n", a * b);
        break;

        default:
        printf("Sinal de operação matemática inválido!\n");
        break;
    }

     
     
    return 0;
}