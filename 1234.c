#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[100];
        while(scanf("%[^\n]%*c",frase)!= EOF){
            int k=0;
            for(int j =0; j < strlen(frase);j++){

                if(k%2==0 && islower(frase[j])){
                    frase[j]=toupper(frase[j]);
                }else if(k%2!=0 && isalpha(frase[j])){
                    frase[j]=tolower(frase[j]);
                }/*else if(frase[j]== ' '){
                    frase[j]= ' ';
                }*/
                if(frase[j]>='a'&& frase[j]<='z' ||frase[j]>='A' && frase[j]<='Z'){
                    k++;
                }
            }
            printf("%s\n",frase);
        }

    return 0;
}
