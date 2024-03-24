#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int lista[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &lista[i]);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(lista[j] > lista[j + 1]){
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }


    int contou[n];

    for(int i = 0; i < n; i++){
        contou[i] = 0;
    }

    for(int i = 0; i < n; i++){
        if (contou[i]==0){
            int contador = 0;

            for(int j = i; j < n; j++){
                if(lista[i] == lista[j]){
                    contador++;
                    contou[j] = 1;
                }
            }
            printf("%d aparece %d vez(es)\n", lista[i], contador);
        }
    }

    return 0;
}
