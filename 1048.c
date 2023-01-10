#include<stdio.h>

int main(){

    double A, reajust;

    scanf("%lf", &A);

    if(A<=400){
        reajust = A*0.15;
        A *= 1.15;
        printf("Novo Salario: %.2lf \nReajuste ganho: %.2lf\n", A, reajust);
        printf("Em porcentual: 15 %");
    }
    else if(A>400 && A<=800){
        reajust = A*0.12;
        A *= 1.12;
        printf("Novo Salario: %.2lf \nReajuste ganho: %.2lf\n", A, reajust);
        printf("Em porcentual: 12 %");
    }
    else if(A>800 && A<=1200){
        reajust = A*0.10;
        A *= 1.10;
        printf("Novo Salario: %.2lf \nReajuste ganho: %.2lf\n", A, reajust);
        printf("Em porcentual: 10 %");
    }
    else if(A>1200 && A<2000){
        reajust = A*0.07;
        A *= 1.07;
        printf("Novo Salario: %.2lf \nReajuste ganho: %.2lf\n", A, reajust);
        printf("Em porcentual: 7 %");
    }
    else {
        reajust = A*0.04;
        A *= 1.04;
        printf("Novo Salario: %.2lf \nReajuste ganho: %.2lf\n", A, reajust);
        printf("Em porcentual: 4 %");
    }

}
