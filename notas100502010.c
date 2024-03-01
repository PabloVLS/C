#include <stdio.h>

int main() {

     double a,sobra,umzin;
     int cem,cinquenta,vinte,dez,cinco,dois,um1,cinquetinha,vintecinco,deizin,cinquin;
     double um;
     scanf("%lf",&a);

     cem=a/100;
     cinquenta = (a-cem*100)/50;
     vinte = ((a-cem*100)-(50*cinquenta))/20;
     dez= ((a-cem*100)-(50*cinquenta)-(20*vinte))/10;
     cinco =  ((a-cem*100)-(50*cinquenta)-(20*vinte)-(10*dez))/5;
     dois = ((a-cem*100)-(50*cinquenta)-(20*vinte)-(10*dez)-(5*cinco))/2;

     sobra = ((a-cem*100)-(50*cinquenta)-(20*vinte)-(10*dez)-(5*cinco))-(2*dois);
     um = sobra * 100;
     um1 = um / 100;
     cinquetinha = (sobra - um1)/0.50;
     vintecinco = ((sobra - um1)-(cinquetinha*0.50))/0.25;
     deizin = ((sobra - um1)-(cinquetinha*0.50)-(vintecinco*0.25))/0.10;
     cinquin = ((sobra - um1)-(cinquetinha* 0.50)-(vintecinco*0.25)-(deizin*0.10))/0.05;
     umzin = ((sobra - um1)-(cinquetinha*0.50)-(vintecinco*0.25)-(deizin*0.10)-(cinquin*0.05))/0.1;
     umzin = umzin*10;
    printf("NOTAS:\n");
     printf("%d nota(s) de R$ 100.00\n",cem);
     printf("%d nota(s) de R$ 50.00\n",cinquenta);
     printf("%d nota(s) de R$ 20.00\n",vinte);
     printf("%d nota(s) de R$ 10.00\n",dez);
     printf("%d nota(s) de R$ 5.00\n",cinco);
     printf("%d nota(s) de R$ 2.00\n",dois);

     printf("MOEDAS:\n");
     printf("%d moeda(s) de R$ 1.00\n",um1);
     printf("%d moeda(s) de R$ 0.50\n",cinquetinha);
     printf("%d moeda(s) de R$ 0.25\n",vintecinco);
     printf("%d moeda(s) de R$ 0.10\n",deizin);
     printf("%d moeda(s) de R$ 0.05\n",cinquin);
     printf("%.0lf moeda(s) de R$ 0.01\n",umzin);

    return 0;
}
