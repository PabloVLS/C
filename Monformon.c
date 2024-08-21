#include<stdio.h>
#include<string.h>

int main(){
    char tipo[20];
    char alimento[20];
    int qtd;
    scanf(" %s  %d",tipo, &qtd);

    for(int i=0; i < qtd;i++){
        scanf(" %s",alimento);
        if(strcmp(alimento, "burrito")==0){
            strcpy(tipo,"foguento");
        }else if(strcmp(alimento, "alface")==0){
            strcpy(tipo,"pranta");
        }else if(strcmp(alimento, "cerveja")==0){
            strcpy(tipo,"aguado");
        }
    }
    printf("%s\n",tipo);



    return 0;
}
