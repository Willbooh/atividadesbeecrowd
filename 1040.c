#include<stdio.h>

int main(){

    double N1, N2, N3, N4, media, exame, media2;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1lf",media);

    if(media>=7){
        printf("\nAluno Aprovado.");
    }

    if(media<=6.9 && media>=5.0){
        printf("\nAluno em Exame.");
        printf("\nNota do exame: ");
        scanf("%lf",&exame);
        media2 = (media+exame)/2;
        if(media2>=5){
            printf("Aluno Aprovado");
            printf("\nMedia final: %.1lf",media2);
        } else {
            printf("Aluno Reprovado");
            }
    }
    if(media<5){
        printf("\nAluno Reprovado.");
    }

}
