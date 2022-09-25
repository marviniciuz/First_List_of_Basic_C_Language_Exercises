#include<stdio.h>

void main()
{

    int idade, peso;
    float altura;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%d", &peso);

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %dkilos\n", peso);
}