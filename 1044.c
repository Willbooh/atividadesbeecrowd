#include<stdio.h>

int main(){

    int A, B, aux, mult;

    scanf("%d %d", &A, &B);

    if(A>B){
        aux = A;
        A = B;
        B = aux;
    }

    mult = B%A;
    if(mult==0){
        printf("Sao Multiplos");
    } else{
        printf("Nao sao Multiplos");
    }
}
