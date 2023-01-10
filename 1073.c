#include<stdio.h>

int main(){

    int vet[2000], quad=0, par=0, N;

    scanf("%d",&N);

    for(int i=1;i<=N;i++){
         par = i%2;
         if(par==0){
            quad = i*2;
            printf("\n%d^2 = %d",i, quad);
         }
    }

}
