#include <stdio.h>

int main() {

    int N,L,C,caiu=0;

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d %d",&L,&C);
        if(L>C){
           caiu=caiu+C;
        }
    }

    printf("%d\n",caiu);

    return 0;
}
