#include<stdio.h>

struct Aluno {

    char nome[100];
    char email[100];
    int matricula;

    void ler() {
        printf("Digite o nome do aluno: ");
        scanf("%[^\n]%*c", nome);
        printf("Digite o email do aluno: ");
        scanf("%[^\n]%*c", email);
        printf("Digite a matricula do aluno: ");
        scanf("%d%*c", &matricula);
    }

    void imprimir() {
        printf("Nome: %s\n", nome);
        printf("Email: %s\n", email);
        printf("Matricula: %d\n", matricula);
    }

};

int main() {

    Aluno a;

    a.ler();
    a.imprimir();

    return 0;
}
