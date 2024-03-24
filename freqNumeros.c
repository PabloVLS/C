#include <stdio.h>

int main() {

    int qtd=0,cont=0;
    int vetor[2000]={0};
    int numero;

    scanf(" %d",&qtd);
    for(int i=0; i < qtd;i++){
         scanf("%d",&numero);
         vetor[numero]++;
    }
    for(int i = 1; i <2000; i++){
        if(vetor[i]>0){
            printf("%d aparece %d vez(es)\n",i,vetor[i]);
        }
    }

    return 0;
}
