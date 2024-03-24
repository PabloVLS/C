#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int N,somap=0,somaf=0,div=0;

    scanf("%d",&N);

    int mat[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&mat[i][j]);

        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i=j){
                somap=somap+mat[i][j];
            }else if(i+j==N-1){

                somaf=somaf+mat[i][j];
            }

        }

    }
    if(somap>somaf){
        div=somap-somaf;
    }else{
       div=somaf-somap;
    }


    printf("%d",div);


    return 0;
}
