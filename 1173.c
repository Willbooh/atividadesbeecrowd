#include<stdio.h>

int main(){

    int vet[10],N;

    scanf("%d",&N);

    for(int i=0;i<10;i++){
        if(i==0){
            vet[i] = N;
            printf("\nN[%d] = %d",i,N);
        } else {
            vet[i] = vet[i-1]*2;
            printf("\nN[%d] = %d",i,vet[i]);

        }
        }

}
