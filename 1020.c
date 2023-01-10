#include<stdio.h>


int main(){

    int N, A=0, M=0, D=0;

    scanf("%d",&N);

    A = N/365;
    M = abs(N-(A*365))/30;
    D = abs(N-(A*365)-(M*30)); //abs = Valor Absoluto em C

    printf("\n%d ano(s) \n%d mes(es)\n%d dia(s)",A,M,D);


}
