#include <stdio.h>

char main(){

    char letra;
    
    printf("digite uma letra\n");
    scanf("%c",&letra);

    if (letra == 'a'||letra == 'e'||letra == 'i'||letra =='o'||letra =='u')
    {
        printf("a letra digitada e uma vogal\n");
    }
    else {

        printf("a letra não e vogal\n");
    }
        
    printf("a letra digitada e %c",letra);

    return 0;

}