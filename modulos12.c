#include<stdio.h>
int main (){
    int num,total=0;

    //scanf("%d",&num);
    int numeros[13];
    for(int i = 0 ; i < 13 ; i++){
        scanf("%d",&numeros[i]);
    }
    int aux = 0;
    for (int i = 0; i <13; ++i){
        for (int j = i + 1; j < 13; ++j){
            if (numeros[i] > numeros[j]){
                aux =  numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    for(int i = 0 ; i < 13 ; i++){
        printf("%d ",numeros[i]);
    }
    printf("\n");
    aux = 0;
    for (int i = 0; i < 13; ++i){
        for (int j = i + 1; j < 13; ++j){
            if (numeros[i] < numeros[j]){
                aux =  numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }


    for(int i = 0 ; i < 13 ; i++){
        printf("%d ",numeros[i]);
    }
    return 0;
}
