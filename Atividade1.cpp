/*1. Criar uma struct para armazenar um cliente, contendo os seguintes dados: nome, data de nascimento,
idade e sexo. O sexo � apenas uma letra (M ou F) e a data de nascimento deve ser armazenada
numa struct de data, com 3 inteiros (dia, m�s e ano). A idade deve ser calculada quando a data de nascimento
for lida, e n�o solicitada ao usu�rio. Guarde a data atual numa vari�vel da struct de data e crie uma fun��o para calcular a idade.

Ap�s isso, criar um menu com 2 op��es: cadastrar cliente e listar clientes. Na primeira, um cliente deve ser lido e na segunda exibidos todos os clientes em ordem de cadastro.
Trate para que seu aplicativo armazene no m�ximo 50 clientes ao mesmo tempo.
*/


#include<stdio.h>

struct Cliente{
    char nome[100];
    char idade;
    char sexo;
    int dia,mes,ano;


    void ler(){
        printf("Digite o nome do cliente:");
        scanf("[^\n] ", nome);

        printf("Digite o sexo(M,F):");
        scanf("[^\n]*c", sexo);
        lerDataNasc();
    }

    void lerDataNasc(){

        printf("Digite a Data de nascimento (dia/m�s/ano): ");
        scanf("%d/%d/%d", &dia, &mes, &ano);

        printf("Data de nascimento: %02d/%02d/%04d\n", dia, mes, ano);
        calcularIdade();
    }

    void calcularIdade(){
        idade = ano-2024;
        printf("Idade:%d",idade);
    }

};

int main(){
    Cliente a;
    a.ler();
    return 0;
}
