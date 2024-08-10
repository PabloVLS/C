#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /*char nome[100];
    scanf("%[^\n]", nome);
    printf("%s\n", nome);*/

    int qtd;
    scanf("%d",&qtd);

    while(qtd-->0){
        int contador[26] = {0};
        int maximo=0;
        char frase[201];
        char maior;

        scanf(" %[^\n]", frase);
        for(int j=0; j<strlen(frase);j++){
            if(isalpha(frase[j])){
                frase[j]=tolower(frase[j]);
            }
            contador[frase[j]-'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(contador[i] > maximo){
                maximo=contador[i];
            }
        }

        for(int i = 0; i < 26; i++){
            if(contador[i] == maximo){
                printf("%c",'a'+i);
            }
        }
        printf("\n");

    }


    return 0;
}
