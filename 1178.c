#include<stdio.h>

int main(){

    float vet[100];

    for(int i=0;i<1;i++){
        scanf("%f",&vet[i]);
    }
    for(int i=1;i<100;i++){
        vet[i] = vet[i-1]/2;
    }
    for(int i=0;i<100;i++){
        printf("\nN[%d] = %.4f", i, vet[i]);
    }
}
