#include<stdio.h>

int main(){

    double vet[100], T, J[100], X;


    vet[0]= 0;
    vet[1]= 1;

    for(int i=2;i<60;i++){
        vet[i] = vet[i-2]+vet[i-1];
    }

    scanf("%d",&T);

    for(int j=0;j<T;j++){
        scanf("%d",&J[j]);
    }
    for(int j=0;j<T;j++){
        X = J[j];
        printf("\nFib(%d) = %d", J[j], vet[X]);
    }
}
