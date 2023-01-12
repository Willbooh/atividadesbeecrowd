#include<stdio.h>

int main(){

    double vet[1000];

    for(int i=0;i<10;i++){
        scanf("%lf",&vet[i]);
    }
    for(int i=0;i<10;i++){
        if(vet[i]<=10){
            printf("\n A[%d] = %.1lf", i, vet[i]);
        }
    }
}
