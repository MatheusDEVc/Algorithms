#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(void)
{
    setlocale(LC_ALL, "pt-br");

    tipo_pessoa lista[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira os dados (%d): \n", i + 1);

        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");

    printf("Dados informados:\n");
    for (i = 0; i < TAM; i++){
        printf("=============Pessoa (%d)============\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
    }

     printf("==============================");

    return 0;
}

// int main (void){
//     setlocale(LC_ALL, "Portuguese");

//     int ok;
//     int i = 1;

//     printf("Insira um n�mero:\n");                                                 // TABUADA
//     scanf("%i", &ok);

//     system("cls");

//     printf("Tabuada do %i\n", ok);

//     while (i <= 10){
//         printf("%i x %i = %i\n", ok, i, ok * i);
//         i++;
//     }

//     return 0;
// }

// int main (){
//     setlocale(LC_ALL, "Portuguese");

//     int tab;

//     printf("Insira um n�mero:\n");                                            //tabuada
//     scanf("%i", &tab);

//     printf("Tabuada do %i:\n", tab);

//     for(int i = 1;i <= 10; i++){
//         printf("%i x %i = %d\n", tab, i, tab * i);
//     }

//     return 0;
// }