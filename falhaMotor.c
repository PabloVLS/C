#include <stdio.h>

int main() {

    int qtd=0,j=0,i=0,posicao=0,maior=0;

    scanf("%d",&qtd);
    int vetor[qtd];

    for(i =0 ; i<qtd;i++){
        scanf("%d",&vetor[i]);
    }
    maior = vetor[0];
    for(i =0 ; i<qtd;i++){
        if(vetor[i+1] > maior){
            maior= vetor[i+1];
        }

        if(vetor[i+1] < maior){
            posicao= i+2;
            break;
        }

    }



    printf("%d\n",posicao);
    return 0;
}
