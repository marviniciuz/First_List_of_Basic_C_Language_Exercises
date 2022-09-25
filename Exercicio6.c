#include<stdio.h>


void main()
{
    int idade, peso;
    float altura;

    printf("Digite a idade, a altura e o peso, separados por um espaço em branco.\n");
    scanf("%d%f%d", &idade, &altura, &peso);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %d\n", peso);
}