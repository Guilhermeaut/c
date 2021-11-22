// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis do retangulo 
int a, b, multiplicacao;

// Solicita a entrada das medidas(base) do retangulo/quadrado
printf("DIGITE A MEDIDA DA BASE DO SEU RETANGULO/QUADRADO");
scanf("%i", &a);

// Solicita a entrada das medidas(altura) do retangulo/quadrado
printf("DIGITE A MEDIDA DA ALTURA DO SEU RETANGULO/QUADRADO");
scanf("%i", &b);

multiplicacao = a * b;
printf(" A AREA DO SEU RETANGULO/QUADRADO SERA DE %.1i",multiplicacao);
return 0;
}