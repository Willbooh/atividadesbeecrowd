#include<stdio.h>

int main(){

    double x,  y;

    scanf("%lf %lf", &x, &y);

    if(x==0 && y==0){
        printf("Origem");
    }

    if(x>0 && y>0){
        printf("Q1");
    }

    if(x>0 && y<0){
        printf("Q4");
    }

    if(x<0 && y>0){
        printf("Q2");
    }

    if(x<0 && y<0){
        printf("Q3");
    }

    if(x==0 && y!=0){
        printf("Eixo Y");
    }

    if(x!=0 && y==0){
        printf("Eixo X");
    }
}
