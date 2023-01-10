#include<stdio.h>

int main(){

    double codigo, qtd, valor, codigo2, qtd2, valor2, TOTAL;

    scanf("%lf %lf %lf",&codigo, &qtd, &valor);

    scanf("%lf %lf %lf",&codigo2, &qtd2, &valor2);

    TOTAL = (qtd*valor)+(qtd2*valor2);

    printf("\nVALOR A PAGAR = %.2lf\n",TOTAL);

}
