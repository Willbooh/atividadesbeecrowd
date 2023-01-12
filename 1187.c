#include<stdio.h>

int main(){

    int matriz[5][5], Soma=0;


    for (int i=0; i<5; i++ ){
       for (int j=0; j<5; j++ ){
            scanf ("%d", &matriz[i][j]);
       }
    }

    for (int i=0; i<=3; i++ ){            // o 3 determinar até onde a linha vai
       for (int j=i+1; j<=4-i; j++ ){      //o 4 determina até onde a coluna pega na matriz
                Soma += matriz[i][j];
            }
        }
    printf("Soma = %d",Soma);
}

