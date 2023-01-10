#include<stdio.h>

int main(){

    int I=0, J=7, K=5;

    for( int i=1; i<=9;){
        for(int j=J; j>=K; j--){
            printf("\nI=%d\tJ=%d", i, j);
        }
        i+= 2;
        J+= 2;
        K+= 2;
    }
    }

