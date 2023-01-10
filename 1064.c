#include<stdio.h>

int main(){

    double vet[6], pos=0, aux=0, media;

    for(int i=0;i<6;i++){
        scanf("%lf",&vet[i]);
        if(vet[i]>0){
            pos += 1;
            aux += (vet[i]);
        }
    }

    media = aux/pos;
    printf("%.lf valores positivos \n%.1lf", pos, media);

}
