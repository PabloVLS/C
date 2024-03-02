#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int vezes;
    char frase[1000];
    char fraseCopia[1000][1000];
    scanf("%d", &vezes);



    for (int i = 0; i < vezes; i++) {
        fgets(frase, sizeof(frase), stdin);
        strcpy(fraseCopia[i], frase);

        int tamanho = strlen(fraseCopia[i]);

        for (int j = 0; j < tamanho; j++) {
            if (fraseCopia[i][j] == 'a' || fraseCopia[i][j] == 'A') {
                fraseCopia[i][j] = '@';
            } else if (fraseCopia[i][j] == 'e' || fraseCopia[i][j] == 'E') {
                fraseCopia[i][j] = '&';
            } else if (fraseCopia[i][j] == 'i' || fraseCopia[i][j] == 'I') {
                fraseCopia[i][j] = '!';
            } else if (fraseCopia[i][j] == 'o' || fraseCopia[i][j] == 'O') {
                fraseCopia[i][j] = '*';
            } else if (fraseCopia[i][j] == 'u' || fraseCopia[i][j] == 'U') {
                fraseCopia[i][j] = '%';
            }
        }
    }

    for (int i = 0; i < vezes; i++) {
        printf("%s", fraseCopia[i]);
    }

    return 0;
}
