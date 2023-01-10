#include<stdio.h>

int main(){

    int vet[120], maior=0, indice=0;

    for(int i=0;i<100;i++){
         scanf("%d",&vet[i]);
    }

    for(int i=0;i<100;i++){
        if(vet[i]>maior){
            maior = vet[i];
            indice = i+1;
        }
    }
    printf("\n%d \n%d", maior, indice);
}
