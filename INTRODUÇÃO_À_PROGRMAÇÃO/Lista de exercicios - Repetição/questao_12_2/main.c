/*Escreva um programa que calcule a média aritmética das 3 notas dos alunos de uma classe. O programa deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float nota1, nota2, nota3, somaMedia = 0;
    int codigo;
/*
    do{
        printf("Código do Aluno: ");
        scanf("%d",&codigo);

        printf("Nota 1: ");
        scanf("%f",&nota1);

        printf("Nota 2: ");
        scanf("%f",&nota2);

        printf("Nota 3: ");
        scanf("%f",&nota3);

    }while(codigo != 0);
*/
    
    while(1){
        printf("Código do Aluno: ");
        scanf("%d",&codigo);

        if (codigo == 0){
            break;
        }

        printf("Nota 1: ");
        scanf("%f",&nota1);

        printf("Nota 2: ");
        scanf("%f",&nota2);

        printf("Nota 3: ");
        scanf("%f",&nota3);
    }

    return 0;
}