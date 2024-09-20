#include<stdio.h>

struct Item {

    char nome[100];
    int qtd;
    double pu, pt;

    void ler() {
        printf("Digite o nome: ");
        scanf("%[^\n]%*c", nome);
        printf("Qtd: ");
        scanf("%d%*c", &qtd);
        printf("P.U.:");
        scanf("%lf%*c", &pu);
        calcularTotal();
    }

    void imprimir() {
        printf("%s\t%d\tR$%.2lf\tR$%.2lf\n",
               nome, qtd, pu, pt);
    }

    void calcularTotal() {
        pt = qtd * pu;
    }

};

struct Venda {

    int qtd;
    double pt;
    Item itens[100];

    void ler() {
        printf("Digite a qtd de itens: ");
        scanf("%d%*c", &qtd);
        for (int i = 0; i < qtd; i++) {
            itens[i].ler();
        }
        calcularTotal();
    }

    void imprimir() {
        for (int i = 0; i < qtd; i++) {
            itens[i].imprimir();
        }
        printf("Total de itens: %d\n", qtd);
        printf("Preco final: R$%.2lf\n", pt);
    }

    void calcularTotal() {
        pt = 0;
        for (int i = 0; i < qtd; i++) {
            pt += itens[i].pt;
        }
    }

};

int main() {

    /*Item i;

    i.ler();
    i.imprimir();*/

    Venda v;

    v.ler();
    v.imprimir();

    return 0;
}
