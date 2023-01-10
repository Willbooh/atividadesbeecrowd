#include<stdio.h>

int main(){

    int NUMBER, HORAS;
    double VALOR, SALARY;

    printf("\nNumero do funcionario: \n");
    scanf("%d",&NUMBER);

    printf("\nHoras trabalhadas: \n");
    scanf("%d",&HORAS);

    printf("\nValor da hora trabalhada: \n");
    scanf("%lf",&VALOR);

    SALARY = HORAS * VALOR;

    printf("\nNUMBER = %d\n",NUMBER);
    printf("\nSALARY = US %.2lf\n",SALARY);


}
