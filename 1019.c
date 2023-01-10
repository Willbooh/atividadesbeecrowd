#include<stdio.h>


int main(){

    int N, H=0, M=0, S=0;

    scanf("%d",&N);

    H = N/3600;
    M = abs(N-(H*3600))/60;
    S = abs(N-(H*3600)-(M*60)); //abs = Valor Absoluto em C

    printf("\n%d:%d:%d",H,M,S);


}
