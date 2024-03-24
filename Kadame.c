#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, soma, max = 0;
    int vetor[7];

    for (int i = 0; i < 7; i++) {
        scanf("%d", &vetor[i]);
    }

    max = vetor[0];

    for (int i = 0; i < 7; i++) {
        soma = 0;
        for (int j = i; j < 7; j++) {
            soma = soma + vetor[j];
            if (soma > max) {
                max = soma;
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
