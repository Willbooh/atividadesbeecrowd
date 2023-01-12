#include<stdio.h>

int main(){

    int vet[1000], menor, N, I;

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&vet[i]);
    }
    menor = vet[0];
    for(int i=1;i<N;i++){
        if(menor>vet[i]){
            menor = vet[i];
            I = i;
        }
        }
    printf("\nMenor valor: %d\nPosicao: %d", menor, I);
    }
