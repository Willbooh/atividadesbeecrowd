#include<stdio.h>

int main(){

    double vet[1000], A, B, C, N;

    scanf("%lf",&N);

    for(int i=1;i<=N;i++){
         scanf("%lf %lf %lf", &A, &B, &C);
         vet[i] = ((A*2)+(B*3)+(C*5))/10;
    }
    for (int i=1; i<=N; i++){
        printf("\n%.1lf",vet[i]);
    }
}
