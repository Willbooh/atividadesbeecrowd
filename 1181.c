#include<stdio.h>

int main(){

    int matriz[3][3], N;

    for (int i=0; i<3; i++ ){
       for (int j=0; j<3; j++ ){
            scanf ("%d", &matriz[i][j]);
       }
    }
    scanf("%d",&N);

    for (int i=0; i<3;i++){
            printf("\n%d",matriz[N-1][i]);
       }
}
