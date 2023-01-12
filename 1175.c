#include<stdio.h>

int main(){

    int vet[100], aux=0;

    for(int i=0;i<10;i++){
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<5;i++){
        aux = vet[i];
        vet[i] = vet[9-i];
        vet[9-i] = aux;

    }
    for(int i=0;i<10;i++){
        printf("\nN[%d] = %d",i,vet[i]);
    }
}

