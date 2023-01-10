#include<stdio.h>

int main(){

    int valor, imp=0, teste=0;

    scanf("%d",&valor);

    for(int i=valor;teste<6;i++){
        imp = i%2;
        if(imp!=0){
            printf("\n%d",i);
            teste += 1;
        }
    }

}
