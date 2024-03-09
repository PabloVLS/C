#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M;

    scanf("%d %d",&N,&M);

    if(N>=2000 || M>=2019){
        printf("Sim\n");
    }else if(N<2000 && M<2019){
        printf("Nao\n");
    }


    return 0;
}
