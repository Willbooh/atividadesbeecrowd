#include<stdio.h>

int main(){

    int vet[1000], in=0, out=0, valor;

    scanf("%d",&valor);

    for(int i=0;i<valor;i++){
        scanf("%d",&vet[i]);
        if(vet[i]>=10 && vet[i]<=20){
            in += 1;
        } else {
            out += 1;
        }
    }

    printf("\n%d in",in);
    printf("\n%d out",out);
}
