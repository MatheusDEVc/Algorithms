#include <stdio.h>
#include <string.h>

#define MAX 30

int main(void){           //Conte quantos caracteres existem em uma string (sem usar strlen)

    char v[100];
    int i;

    printf("Digite um texto:\n");
    fgets(v, 100, stdin);

    v[strcspn(v, "\n")] = '\0';
    //essa linha basicamente tira o "\n" de quando o usuario tecla enter no final de uma string, para colocar diretamente o "\0", isso é necessário para caso queira contar caractéres de uma string, ou ate mesmo se for usar o "strcmp"!


    for(i=0; v[i] != '\0'; i++);
    //esse for, contem algo tipo "Enquanto "v[i]" for diferente de "\0", incrementa(++) mais um!"

    if(v[0] == '\0'){     //Verificar se uma string está vazia.
        printf("O texto esta vazio!\n");
    } else{
        printf("Quantidade de caracteres: %d\n", i);
    }

    return 0;
}

//---------------------------------------------------------------------------------------------------------

// int main(void){            //Leia um nome e exiba cada caractere em uma linha diferente.

//     char name[MAX];
//     int i, s;

//     printf("Digite algo: \n");
//     fgets(name, MAX, stdin);

//     name[strcspn(name, "\n")] = '\0';
//  // essa linha basicamente tira o "\n" de quando o usuario tecla enter no final de uma string, para colocar diretamente o "\0", isso é necessário para caso queira contar caractéres de uma string, ou ate mesmo se for usar o "strcmp"!


//     s = strlen(name);

//     for(i=0; i<s; i++){
//         printf("%c\n", name[i]);
//     }


//     return 0;
// }