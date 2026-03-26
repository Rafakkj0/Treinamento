#include <stdio.h>

#define MEDIA 6
#define QUANT_NOTAS 3

int main(){
    float n, temp;
    printf("Calculadora de notas que ultiliza apenas 2 variaveis.\nNota 1: ");
    scanf("%f",&n);
    printf("Nota 2: ");
    scanf("%f",&temp);
    n = n + temp;
    printf("Nota 3: ");
    scanf("%f",&temp);
    n = n + temp;

    printf("\n%f", n);
    return 0;
}