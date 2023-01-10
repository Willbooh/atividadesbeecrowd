#include<stdio.h>

int main(){

    int A, B, minI, minF, horas, min;

    scanf("%d %d %d %d", &A, &minI, &B, &minF);

    horas = B-A;
    min = minF-minI;

    if(horas<=0){
        horas += 24;
    }

    if(min<0){
        min += 60;
        horas -= 1;
    }

    printf("\nO JOGO DUROU %d HORA(S) E %d MINUTO(S)", horas, min);
}
