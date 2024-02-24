#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd=0, contM=0 , contF=0;
    double menor=10 , maior= 0, media = 0;
    double altura[100];
    char sexo[100];

    printf("Quantas pessoas serão digitadas ?\n");
    scanf("%d",&qtd);

    for(int i = 1 ; i <= qtd ; i++){
        printf("Altura da %d pessoa:",i);
        scanf("%lf",&altura[i]);
        printf("Sexo da %d a pessoa (F/M):",i);
        scanf(" %c",&sexo[i]);

        if(altura[i] > maior){
           maior = altura[i];
        }
        if(altura[i] < menor){
           menor = altura[i];
        }
        if(sexo[i] == 'F'){
            contF ++;
            media += altura[i];
        }
        if(sexo[i] == 'M'){
            contM ++;

        }

    }
    if(media != 0){
        media = media / contF;
    }


    printf("Menor altura %.2f\n", menor);
    printf("Maior altura %.2f\n", maior);
    printf("Media das alturas femininas %.2f\n", media);
    printf("Numero de homens %d\n", contM);

    return 0;
}
