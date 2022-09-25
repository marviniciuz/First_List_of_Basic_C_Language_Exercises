#include <stdio.h>
#include <stdlib.h>

float main(){

    float peso;
    int idade;

    printf("Digite sua idade \n");
    scanf("%i",&idade);

    printf("Digite seu peso \n");
    scanf("%f",&peso);

    printf("A sua idade e = %i anos e seu peso e = %.1fkg",idade,peso);
    
    return 0;

}