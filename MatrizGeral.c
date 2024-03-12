#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0,linhaEscolhida=0,colunaEscolhida=0, contadorDiagonal=-1;
    int matriz[10][10];
    int diagonal[10] ;
    int matrizAlterada[10][10];
    int somaTotal=0;

    printf("Qual a ordem da matriz ? eim ? PAU NU CU\n");
    scanf("%d",&N);
    for(int i = 0; i < N;i++){
        for(int j = 0 ; j<N;j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] >=0){
                somaTotal += matriz[i][j];
                matrizAlterada[i][j] = matriz[i][j];
            }else{
                matrizAlterada[i][j] = matriz[i][j]* matriz[i][j];;
            }

              if (i == j) {
                contadorDiagonal++;
                diagonal[contadorDiagonal] = matriz[i][j];
            }
        }
    }

    printf("Soma dos Positivos :%d\n",somaTotal);
    printf("\n\n");
    printf("Escolhe a linha ai por gentileza ?\n");
    scanf("%d",&linhaEscolhida);
    printf("LINHA ESCOLHIDA: ");
    for(int j = 0 ; j<N;j++){
              printf("%d  ",matriz[linhaEscolhida][j]);
    }

    printf("\n\n");

    printf("Escolhe a coluna agora mestre do lixo ?\n");
    scanf("%d",&colunaEscolhida);
    printf("COLUNA ESCOLHIDA: ");
    for(int j =0 ; j<N;j++){
              printf("%d  ",matriz[j][colunaEscolhida]);
    }

    printf("\n\n");

    printf("Diagonal Principal:");
    for(int i =0; i <=contadorDiagonal;i++){
       printf("%d ",diagonal[i]);
    }

    printf("\n\n");

    for(int i = 0; i < N;i++){
        for(int j = 0 ; j<N;j++){
               printf("%d ",matrizAlterada[i][j]);
        }
        printf("\n");
    }
    return 0;
}
