#include<stdio.h>

int main(){

    int x, y, aux=0, imp=0, teste=0, inicio;

    scanf("%d %d", &x, &y);

    if(x<y){
        aux = x;
        x = y;
        y = aux;
    }

    for(int i=y; i<x ; i++){
        imp = i%2;
        if(imp!=0 && i!=y){
            teste = teste+i;
        }
    }

    printf("\n%d",teste);
}
