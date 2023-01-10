#include<stdio.h>

int main(){

    int valor, imp=0;

    scanf("%d",&valor);

    for(int i=1; i<valor; i++){
        imp = i%2;
        if(imp!=0){
            printf("\n%d",i);
        }
    }

}
