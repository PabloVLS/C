#include <stdio.h>

int main() {

   int H1 , M1 , H2 ,M2;

    while (scanf("%d %d %d %d", &H1, &M1, &H2, &M2) && (H1 + M1 + H2 + M2 != 0)){

       int totalhora1 = 60*H1+M1;
       int totalhora2 = 60*H2+M2;

       if(totalhora2 > totalhora1){
         int total = totalhora2 -totalhora1;
       }else if(totalhora1 > totalhora2){
         int total = (24*60 -totalhora1)+totalhora2;
       }


       printf("%d\n",hora);
    }
    return 0;
}
