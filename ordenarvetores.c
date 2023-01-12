#include<stdio.h>

int main()
{

    int vet[10], aux;


    for (int i=0; i<10; i++ ){
        scanf ("%d", &vet[i]);
    }

    for (int i=0; i<10; i++ ){
        printf("\nVet[%d] = %d", i, vet[i]);
    }

    for (int j=0; j<10; j++ ){
        for(int i=0; i<10; i++){
            if(vet[i]>vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("\nVet[%d] = %d", i, vet[i]);
    }
}
