#include<stdio.h>

int main(){

    double N;

    scanf("%lf",&N);

    if(75<N && N<=100){
        printf("\nIntervalo (75,100]");
    }
     if(50<N && N<=75){
        printf("\nIntervalo (50,75]");
    }
    if(25<N && N<=50){
        printf("\nIntervalo (25,50]");
    }
    if(0<=N && N<=25){
        printf("\nIntervalo [0,25]");
    }
    if(100<N || N<0){
        printf("\nFora do Intervalo");
    }
}
