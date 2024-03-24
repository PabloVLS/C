#include <stdio.h>

int main() {

    int qtd=0,n=0;
    unsigned long long int aux1=0,aux2=0;

    scanf("%d",&qtd);
    unsigned long long int vetor[qtd];

    for(int i = 0 ; i < qtd ; i++){
        scanf("%d",&n);
        aux1=0;
        aux2=1;
        if(n==0){
            vetor[i]=0;
            printf("Fib(%d) = %d\n",n,vetor[i]);
        }else if(n==1){
            vetor[i]=1;
            printf("Fib(%d) = %d\n",n,vetor[i]);
        }else{
            for(int j = 2; j <= n; j++){
                vetor[i]=aux1 + aux2;
                aux1 = aux2;
                aux2 = vetor[i];
            }
            printf("Fib(%d) = %lld\n",n,vetor[i]);
            }
    }

    return 0;
}
