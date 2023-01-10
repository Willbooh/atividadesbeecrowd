#include<stdio.h>

int main(){

    int A, B, horas;

    scanf("%d %d", &A, &B);

    horas = B-A;

    if(horas<=0){
        horas += 24;
    }

    printf("\nO JOGO DUROU %d HORA(S)",horas);
}
