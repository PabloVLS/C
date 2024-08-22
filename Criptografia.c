#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

   int qtd,p;
   scanf("%d",&qtd);
   char frase[1001];

   for(int i=0; i < qtd; i++){
       scanf(" %[^\n]",frase);
       for(int j=0; j<strlen(frase);j++){
           if(isalpha(frase[j])){
               frase[j]=frase[j]+3;
           }

       }
       //printf("%s\n",frase);
        int num=strlen(frase)/2;
       for(int j=0; j<strlen(frase)-num;j++){
               frase[j]=frase[j]-1;
       }

       for(int p=strlen(frase)-1; p>=0;p--){
           printf("%c",frase[p]);
       }
       printf("\n");
   }

    return 0;
}
