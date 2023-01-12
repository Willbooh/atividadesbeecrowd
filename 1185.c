#include<stdio.h>

int main(){

    int matriz[5][5], Soma=0;


    for (int i=0; i<5; i++ ){
       for (int j=0; j<5; j++ ){
            scanf ("%d", &matriz[i][j]);
       }
    }

    for (int i=0; i<5; i++ ){
       for (int j=0; j<5; j++ ){
           if((i+j)<4){                     //O valor 4 representa o valor de (N-1) on N = numero de linhas e colunas
                Soma += matriz[i][j];
            }
        }
    }
    printf("Soma = %d",Soma);
}
