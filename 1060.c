#include<stdio.h>

int main(){

    double vet[6], pos=0;

    for(int i=0;i<6;i++){
        scanf("%lf",&vet[i]);
        if(vet[i]>0){
            pos += 1;
        }
    }

    printf("%.lf valores positivos",pos);

}
