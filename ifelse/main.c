#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// esse simples e pequeno programa eu fiz quando me senti desmotivado, ele tem a função de te motivar a continuar aquilo que você tanto almeja, seja um sonho, um objetivo, uma meta, ou até mesmo um projeto pessoal, não desista daquilo que você tanto quer realizar, seja persistente para alcançar suas metas e objetivos!

int main(void) { 
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    char resposta[2]; 

    printf("Tem algo que você quer muito realizar? (Y/N) ");
    scanf("%1s", resposta); 

    if (strcmp(resposta, "y") == 0 || strcmp(resposta, "Y") == 0) {
        printf("Então termina aquilo que começou, nunca desista dos seus sonhos e de seus objetivos!\n");
    } else {
        printf("Não desista daquilo que tanto almeja, seja persistente para alcançar suas metas e objetivos!\n");
    }

    return 0;
}
