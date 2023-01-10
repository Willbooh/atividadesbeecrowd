#include<stdio.h>

int main(){

    int vet[5], rest, par=0;

    for(int i=0;i<5;i++){
        scanf("%d",&vet[i]);
        rest = vet[i]%2;
        if(rest==0){
            par += 1;
        }
    }

    printf("%d valores pares ",par);

}
