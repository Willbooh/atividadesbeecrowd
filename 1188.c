#include<stdio.h>

int main(){

    int matriz[5][5], Soma=0;


    for (int i=0; i<5; i++ ){
       for (int j=0; j<5; j++ ){
            scanf ("%d", &matriz[i][j]);
       }
    }

    for (int i=3; i<=4; i++ ){                      //[i=3] vai iniciar a contagem a partir do valor de i [i<=4 pq é o tamanho da matriz sem as diagonais
       for (int j=4-i+1; j<=i-1; j++ ){             //
                Soma += matriz[i][j];
            }
        }
    printf("Soma = %d",Soma);
}

