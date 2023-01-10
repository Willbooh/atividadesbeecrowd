#include<stdio.h>

int main(){

    int x1, x2, x3, aux, ordem1, ordem2, ordem3;

    scanf("%d %d %d", &x1, &x2, &x3);
    ordem1=x1;
    ordem2=x2;
    ordem3=x3;

    if(x1>x3){
        aux = x1;
        x1 = x3;
        x3 = aux;
    }

    if(x2>x3){
        aux = x2;
        x2 = x3;
        x3 = aux;
    }

    if(x1>x3){
        aux = x1;
        x1 = x3;
        x3 = aux;
    }

    printf("%d",x1);
    printf("\n%d",x2);
    printf("\n%d",x3);
    printf("\n\n%d",ordem1);
    printf("\n%d",ordem2);
    printf("\n%d",ordem3);
}
