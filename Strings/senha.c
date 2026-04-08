#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 50

int main(void){
    setlocale(LC_ALL, "pt-br");

    char hard_Text[N] = {"Grovestreet"};
    char senha_usr[N];
    int ok;

    printf("Digite uma senha: \n"); 
    fgets(senha_usr, N, stdin);

    senha_usr[strcspn(senha_usr, "\n")] = '\0';

    ok = strcmp(hard_Text, senha_usr);

    if(ok == 0)
        printf("Senha correta!\n");
    else
        printf("Senha incorreta!\n");

    return 0;
}