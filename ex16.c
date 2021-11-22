// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv{
float A,B,C;
printf("digite o lado A do seu triangulo");
scanf("%f",&A);
printf("digite o lado B do seu triangulo");
scanf("%f",&B);
printf("digite o lado C do seu triangulo");
scanf("%f",&C);

if(A<(B+C) & B<(A+C) & C<(A+B)){

    if(A==B & B==C);
printf("triangulo equilatero");
else if(A==B||A==C||C==B)
printf("trangulo isosceles");
else 
printf("triangulo escaleno");

}




return 0;

}