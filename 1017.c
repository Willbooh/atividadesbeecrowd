#include<stdio.h>


int main(){

    double km, horas, gasolina;

    printf("Digite o tempo gasto na viagem: \n");
    scanf("%lf",&horas);
    printf("Digite a velocidade media: \n");
    scanf("%lf",&km);

    gasolina = (horas*km)/12;

    printf("\n%.3lf",gasolina);

}
