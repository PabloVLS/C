#include <stdio.h>
#include <string.h>

int main() {
	char string[101];
	char reverter[101];
	int c=0;
	int posicao = 0;
	scanf("%[^\n]",string);
	int len = strlen(string);

	for (int i = 0; i < len; i++) {
		if (string[i] == ' '){
            continue;
		}
		string[posicao] = string[i];
		posicao++;
	}
	string[posicao] = '\0';
	strcpy(reverter,string);

     int tamanho = strlen(reverter);

    int inicio = 0;

    int fim = tamanho - 1;

    while (inicio < fim) {


        char temp = reverter[inicio];

        reverter[inicio] = reverter[fim];

        reverter[fim] = temp;


        inicio++;

        fim--;

    }

	if(strcmp(reverter,string)==0){
        printf("1\n");
	}else{
        printf("0\n");
	}

}
