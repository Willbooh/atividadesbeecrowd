#include<stdio.h>

int main(){

    int vet[10000], par=0, N;

    scanf("%d",&N);

    for(int i=1;i<=10000;i++){
         par = i%N;
         if(par==2){
            printf("\n%d",i);
         }
    }

}
