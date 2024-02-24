#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd=0,maisrepetido=0,maisrepetido1=0, moda=0, moda1=0,moda2=0,repeticoes=0, teste=0;
    int numeros[100];
    int repete;


    printf("Digite a quantidade de numeros que vão ser digitados:\n");
    scanf("%d",&qtd);
    printf("Digite os %d numeros:\n",qtd);

    for(int i = 0 ; i < qtd ; i++)
    {
        scanf("%d",&numeros[i]);
    }

    for(int i = 0 ; i < qtd ; i++)
    {
        repete = 0;
        for(int j = 0 ; j < qtd ; j++)
        {
            if(numeros[i] == numeros[j])
            {
                repete++;
                moda = numeros[i];
            }
        }
        if(repete > maisrepetido)
        {
            maisrepetido = repete;
            moda1 = moda;
            repeticoes = repete;
        }

    }

    if (maisrepetido > 1)
    {
        printf("O numero que mais repete e: %d, aparecendo %d vezes.\n", moda1, maisrepetido);
    }
    else
    {
       printf("Não ha numeros repetidos\n");
    }

    return 0;
}
