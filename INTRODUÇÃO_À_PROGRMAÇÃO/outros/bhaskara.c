#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float a, b, c, delta, resultado1, resultado2;
    printf("Entre com o coeficiente de x² ");
    scanf("%f",&a);
    printf("Entre com o coeficiente de x ");
    scanf("%f",&b);
    printf("Entre com o termo independente ");
    scanf("%f",&c);
    delta = b * b - 4 * a * c;
    if(delta<0){
        printf("Não há raiz real");
    }
    else{
        printf("Delta = %f\n", delta);
        resultado1 = (-b + sqrt(delta))/(2*a);
        printf("Resultado 1 = %f\n", resultado1);
        resultado2 = (-b - sqrt(delta))/(2*a);
        printf("Resultado 2 = %f\n", resultado2);
    }
    return 0;
}