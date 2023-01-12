#include<stdio.h>

int main(){

    int matriz[5][5], Soma=0;

    for (int i=0; i<5; i++ ){
       for (int j=0; j<5; j++ ){
            scanf ("%d", &matriz[i][j]);
       }
    }

    for (int i=0; i<5; i++ ){
       for (int j=i+1; j<5; j++ ){
           Soma += matriz[i][j];

       }
    }
    printf("Soma = %d",Soma);
}
