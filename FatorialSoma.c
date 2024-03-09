#include <stdio.h>
#include <math.h>

int main() {

    int M,N,fM=1,fN=1,y=0;
    int total=0;
    int vetor[3];

    for(int j=0;j<3;j++){
        fM=1;
        fN=1;
        scanf("%d %d",&M,&N);
        for(int i=1;i<=M;i++){
            fM*=i;
        }
        for(int k=1;k<=N;k++){
            fN*=k;
        }
        total=fN+fM;
        vetor[y]=total;
        y++;
    }
    for(int y=0;y<3;y++){
        printf("%d\n",vetor[y]);
    }
    return 0;
}
