#include<stdio.h>


int main(){

    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf",&x1, &y1);
    scanf("%lf %lf",&x2, &y2);

    distancia = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));


    printf("\n%.4lf ",distancia);


}
