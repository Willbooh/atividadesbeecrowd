#include<stdio.h>

int main(){

    int vet[5], rest, par=0, imp=0, pos=0, neg=0;

    for(int i=0;i<5;i++){
        scanf("%d",&vet[i]);
        rest = vet[i]%2;
        if(rest==0){
            par += 1;
        } else {
            imp += 1;
        }
        if(vet[i]>0){
            pos += 1;
        }
        if(vet[i]<0){
            neg += 1;
        }
    }

    printf("\n%d valor(es) par(es) ",par);
    printf("\n%d valor(es) impar(es) ",imp);
    printf("\n%d valor(es) positivo(s) ",pos);
    printf("\n%d valor(es) negativo(s) ",neg);

}
