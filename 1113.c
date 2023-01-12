#include<stdio.h>

int main(){

    int vet[100], A, B, I=0;

    for(int i=0;A!=B;i++){
        scanf("%d %d", &A, &B);
        if(A>B){
            vet[i] = 0;
        } else {
            vet[i] = 1;
            }
        if(A==B){
            I+= i ;
            break;
        }
    }

    for(int i=0;i<I;i++){
        if(vet[i]==0){
            printf("\nDecrescente");
        } else {
            printf("\nCrescente");
            }

    }

}
