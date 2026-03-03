#include <stdio.h> // Biblioteca de entrada e saída padrão
#include <locale.h> // Biblioteca para configuração de localização, usada para suportar caracteres acentuados

int main() {
    setlocale(LC_ALL, "Portuguese");  // para corrigir acentuação
    float raio, area; // definir as variaveis
    printf("Qual o raio do círculo?\n"); // pergurntar o raio
    scanf("%f", &raio); // pegar a resposta e definir a variavel raio
    area = 3.14 * raio * raio; // calcular a área
    printf("A área do círculo é %.2f", area); // informar a área
    return 0; // dizer que o código já faz o seu trabalho
}