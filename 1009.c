#include<stdio.h>

int main(){

    char NOME;
    double SALARIO, VENDA, TOTAL;

    printf("\nNome do Vendedor: \n");
    scanf(" %s",&NOME);

    printf("\nSalario Fixo: \n");
    scanf("%lf",&SALARIO);

    printf("\nTotal de vendas do vendedor: \n");
    scanf("%lf",&VENDA);

    TOTAL = SALARIO + (VENDA*0.15);

    printf("\nTOTAL = %.2lf\n",TOTAL);

}
