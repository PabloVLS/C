#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    int qtd;
    scanf("%d",&qtd);
    char frase[200];
    for(int i = 0 ; i < qtd; i++){
        scanf("%s",frase);
        for(int j = strlen(frase) ; j >= 0 ; j--){
            if(islower(frase[j])){
                printf("%c",frase[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
