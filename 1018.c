#include<stdio.h>


int main(){

    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
    double moeda;

    scanf("%d",&valor);

    cem = valor/100;
    cinquenta = (valor - (cem*100))/50;
    vinte = (valor - (cem*100)-(cinquenta*50))/20;
    dez = (valor - (cem*100)-(cinquenta*50)-(vinte*20))/10;
    cinco = (valor - (cem*100)-(cinquenta*50)-(vinte*20)-(dez*10))/5;
    dois = (valor - (cem*100)-(cinquenta*50)-(vinte*20)-(dez*10)-(cinco*5))/2;
    um = valor - (cem*100)-(cinquenta*50)-(vinte*20)-(dez*10)-(cinco*5)-(dois*2);

    moeda =((cem*100)-(cinquenta*50)-(vinte*20)-(dez*10)-(cinco*5)-(dois*2)-um)-valor;

    printf("%d notas(s) de R$ 100,00 \n",cem);
    printf("%d notas(s) de R$ 50,00 \n",cinquenta);
    printf("%d notas(s) de R$ 20,00 \n",vinte);
    printf("%d notas(s) de R$ 10,00 \n",dez);
    printf("%d notas(s) de R$ 5,00 \n",cinco);
    printf("%d notas(s) de R$ 2,00 \n",dois);
    printf("%d notas(s) de R$ 1,00 \n",um);
    printf("%lf",moeda);

}
