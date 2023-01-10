#include<stdio.h>

int main(){

    double A, B, C, pi=3.14159, trian, circ, trap, quad, retan;

    scanf("%lf %lf %lf",&A, &B, &C);

    trian = (A*C)/2;
    circ = pi*(C*C);
    trap = 0.5*C*(A+B);
    quad = B*B;
    retan = A*B;


    printf("\nTRIANGULO = %.3lf\n",trian);
    printf("\nCIRCULO = %.3lf\n",circ);
    printf("\nTRAPEZIO = %.3lf\n",trap);
    printf("\nQUADRADO = %.3lf\n",quad);
    printf("\nRETANGULO = %.3lf\n",retan);

}
