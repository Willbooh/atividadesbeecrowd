#include<stdio.h>


int main(){

    float A, B, C, delta, x1, x2;

    scanf("%f %f %f", &A, &B, &C);

    delta = sqrt((B*B)-4*A*C);
    x1 = (-B + delta)/(2*A);
    x2 = (-B - delta)/(2*A);

    if (A>0){
        if (delta>0){
           printf("\nR1 = %.5f \n",x1);
           printf("R2 = %.5f \n",x2);
        } else {
            printf("\nImpossivel calcular");
            }
    } else {
        printf("\nImpossivel calcular");
        }


}
