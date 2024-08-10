#include <stdio.h>
#include <string.h>

int main() {

    char palavra1[30];
    char palavra2[30];
    char palavra3[30];
    scanf("%s %s %s",palavra1,palavra2,palavra3);

     if (strcmp(palavra1, "vertebrado") == 0 && strcmp(palavra2, "ave") == 0 && strcmp(palavra3, "carnivoro") == 0) {
        printf("aguia\n");
    }
    if (strcmp(palavra1, "vertebrado") == 0 && strcmp(palavra2, "ave") == 0 && strcmp(palavra3, "onivoro") == 0) {
        printf("pomba\n");
    }

    if (strcmp(palavra1, "vertebrado") == 0 && strcmp(palavra2, "mamifero") == 0 && strcmp(palavra3, "onivoro") == 0) {
        printf("homem\n");
    }
    if (strcmp(palavra1, "vertebrado") == 0 && strcmp(palavra2, "mamifero") == 0 && strcmp(palavra3, "herbivoro") == 0) {
        printf("vaca\n");
    }

    if (strcmp(palavra1, "invertebrado") == 0 && strcmp(palavra2, "inseto") == 0 && strcmp(palavra3, "hematofago") == 0) {
        printf("pulga\n");
    }
    if (strcmp(palavra1, "invertebrado") == 0 && strcmp(palavra2, "inseto") == 0 && strcmp(palavra3, "herbivoro") == 0) {
        printf("lagarta\n");
    }

    if (strcmp(palavra1, "invertebrado") == 0 && strcmp(palavra2, "anelideo") == 0 && strcmp(palavra3, "hematofago") == 0) {
        printf("sanguessuga\n");
    }
    if (strcmp(palavra1, "invertebrado") == 0 && strcmp(palavra2, "anelideo") == 0 && strcmp(palavra3, "onivoro") == 0) {
        printf("minhoca\n");
    }


    return 0;
}
