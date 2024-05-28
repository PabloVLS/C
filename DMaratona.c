#include <stdio.h>

int main(){
    int horaCerta,minutos,dia;
    double km, velocidade,hora;

    scanf("%d %d", &km, &velocidade);

    double chegada = km / velocidade;
    minutos = (int)((chegada - (int)chegada) * 60);
    if(chegada > 24){
        dia = chegada / 24;
        hora = chegada - (dia*24);
        horaCerta = (hora + 19)-24;
    }else{
        horaCerta = (chegada+19)-24;
    }
    if(horaCerta < 0){
        horaCerta = (horaCerta * -1)+1;
    }

     printf("%02d:%02d\n", horaCerta, minutos);


    return 0;
}
