// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis do retangulo 
int a, area;

//Solicitação ao usuario do valor da aresta do quadrado
printf ("INSIRA A MEDIDA DA ARESTA DO QUADRADO");
scanf ( "%i",&a );

//Operação de calculo de área de um quadrado
area = a*2;

//Mostrar resultado na tela
printf ("A AREA CORRESPONDE A %.1i", area);

//Fim de programa
return 0;
}
