#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     int A,B,aux,divi,x,N;

    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        x=0;
        for(int j=i-1;j>1;j--){
            divi=i%j;
            if(divi==0){
                x=1;
            }

        }
        if(x!=1){
            printf("%d ","",i);
        }

    }

    return 0;
}
