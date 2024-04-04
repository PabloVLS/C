#include <stdio.h>

int main() {

   int qtd,cont=0;
   scanf("%d",&qtd);
   int vetor[qtd];
   int picos[qtd] ;

   for(int i = 0 ; i < qtd ; i++){
        scanf("%d",&vetor[i]);
    }

    if(qtd==1){
       cont=1;
    }else if(qtd==2){
        if(vetor[0] != vetor[1]){
              cont = 1;
        }
    }else if(qtd==3){
          if(vetor[0] == vetor[1]||  vetor[1] == vetor[2] || vetor[0] > vetor[1] && vetor[1] > vetor[2] || vetor[0] < vetor[1] && vetor[1] < vetor[2]){
            cont = 0 ;
          }else{
            cont=1;
          }
    }else{
     if(vetor[0] > vetor[1] || vetor[1] > vetor[0]){
       for(int i = 2; i < qtd; i++){
            if(vetor[i] == vetor[i-1] ||  vetor[i] >vetor[i-1] && vetor[i-1] > vetor[i-2] || vetor[i] < vetor[i-1] && vetor[i-1] < vetor[i-2]){
                cont = 0;
                break;
            } else {
                cont = 1;

            }
        }
    }
    }
    printf("%d\n", cont);

    return 0;
}
