#include <stdio.h>

int main() {

    int h=0,maior=0;

    while(scanf("%d",&h) && h!= 0){
        maior=h;
        while(h!=1){
            if(h%2==0){
                h=h/2;
            }else if(h%2==1){
                 h=(h*3)+1;
            }
            if(h>maior){
                maior=h;
            }
        }
        printf("%d\n",maior);
    }

    return 0;
}
