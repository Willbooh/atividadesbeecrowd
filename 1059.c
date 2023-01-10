#include<stdio.h>

int main(){

    int resto;

    for(int i=1;i<=100;i++){
        resto = i%2;
        if(resto==0){
            printf("\n%d",i);
        }

    }

}
