#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    char resposta[2]; 

    printf("Você ainda pensa em seguir carreira mesmo nisso?... Press Y or N\n");
    scanf("%1s", resposta); 

    if (strcmp(resposta, "y") == 0 || strcmp(resposta, "Y") == 0) {
        printf("Então termina aquilo que começou!\n");
    } else {
        printf("Não desista daquilo que tanto almeja, seja persistente para alcançar suas metas e objetivos!\n");
    }

    return 0;
}
