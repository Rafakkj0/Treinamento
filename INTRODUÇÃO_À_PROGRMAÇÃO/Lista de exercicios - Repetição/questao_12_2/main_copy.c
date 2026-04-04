/*Escreva um programa que calcule a média aritmética das 3 notas dos alunos de uma classe. O programa deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float nota1, nota2, nota3, somaNotas = 0, somaNotasAlunos = 0, somaMediaAlunos = 0;
    int codigo, contadorAlunos = 0;
    
    while(1){
        somaNotas = 0;
        printf("Código do Aluno: ");
        scanf("%d",&codigo);

        if (codigo == 0){
            break;
        }

        printf("Nota 1: ");
        scanf("%f",&nota1);
        somaNotas += nota1;

        printf("Nota 2: ");
        scanf("%f",&nota2);
        somaNotas += nota2;

        printf("Nota 3: ");
        scanf("%f",&nota3);
        somaNotas += nota3;
        
        contadorAlunos++;
        somaMediaAlunos+=somaNotas / 3.0;

        printf("\nMédias de notas do aluno de código %d: %.2f\n\n", codigo, somaNotas / 3.0);
    }
    if(contadorAlunos > 0){
        printf("\nMédia da turma: %.2f\n\n", somaMediaAlunos / contadorAlunos);
    }
    return 0;
}