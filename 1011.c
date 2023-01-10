#include<stdio.h>

int main(){

    double VOLUME, pi=3.14159, raio, RAIO3 ;

    scanf("%lf",&raio);

    RAIO3 = raio*raio*raio;

    VOLUME = (4/3.0)*pi*RAIO3;

    printf("\nVOLUME = %.3lf\n",VOLUME);

}
