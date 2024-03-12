#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1=0,x2=0,y1=0,y2=0,contaX1=0,contaX2=0;
    int qtdMovimentos=0;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);


    while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0 ){
        if(x1>= x2 ){
            contaX1 = x1-x2;
        }else{
            contaX1 = x2-x1;
        }

        if(y1>= y2 ){
            contaX2 = y1-y2;
        }else{
            contaX2 = y2-y1;
        }

        if(x1==x2 && y1==y2){
            qtdMovimentos=0;
        }else if(x1==x2 || y1==y2 || contaX1 == contaX2){
            qtdMovimentos=1;
        }else{
            qtdMovimentos=2;
        }

        printf("%d\n",qtdMovimentos);

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);


    }

}
