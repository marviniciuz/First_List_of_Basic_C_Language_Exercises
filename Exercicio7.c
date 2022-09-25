#include <stdio.h>
#include <math.h>

void main(){ 
    

float n1;
float n2;
float media;

printf ("\n digite sua primeira nota:");
scanf("%f",&n1);

printf ("\n digite sua segunda nota:");
scanf("%f",&n2);

media=(n1+n2)/2;

if (media >=7){

    printf (" \n aluno aprovado \n");
}

else {

    printf ("\n aluno reprovado \n");
}

printf("\n \n sua media final e: %.1f",media);

}

