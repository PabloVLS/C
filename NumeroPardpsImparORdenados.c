#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd;

    scanf("%d",&qtd);

    int numero[qtd];
    int numeroImpar[qtd];
    int numeroPar[qtd];
    int qtdPares = 0;
    int qtdImpares= 0;

    for(int i =0 ; i < qtd ; i++){
        scanf("%d",&numero[i]);
        if(numero[i]%2 == 0){
            numeroPar[qtdPares++] = numero[i];
        }else{
            numeroImpar[qtdImpares++] = numero[i];
        }
    }

    for(int i =0 ; i < qtdPares-1; i++){
        for(int j=i+1 ; j < qtdPares ; j++){
            if(numeroPar[i]> numeroPar[j]){
                int aux = numeroPar[i];
                numeroPar[i] = numeroPar[j];
                numeroPar[j] = aux;
            }
        }
    }

    for(int i = 0; i < qtdImpares-1;i++){
        for(int j=i+1; j < qtdImpares; j++){
                if(numeroImpar[j]> numeroImpar[i]){
                    int aux1 = numeroImpar[i];
                    numeroImpar[i] = numeroImpar[j];
                    numeroImpar[j] = aux1;
                }
        }
    }


    for(int i =0 ; i < qtdPares ; i++){
        printf("%d\n",numeroPar[i]);
    }
    for(int b =0 ; b < qtdImpares ; b++){
        printf("%d\n",numeroImpar[b]);
    }
    return 0;
}

 /*for(int i =numero[qtd] ; i < numero[qtd]  ; i--){
        if(numero[i]%2==0  && numero[i]>= maior){
            maior = numero[i];
            numeroPar[i] = numero[i];
        }
    }*/



 /*for(int i = qtdPares, j = 0; i < qtd; i++, j++) {
        numeroPar[i] = numero[j];
    }

    for(int l =qtdPares ; l < qtd-1 ; l++){
       for(int u = qtdPares; u< qtd-l-1 ; u++){
            if(numeroPar[l]>= numeroPar[u+1]){
                numeroPar[l] = numeroPar[u];
            }
       }
    }*/
