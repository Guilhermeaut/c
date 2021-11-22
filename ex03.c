// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis do triangulo
int a,b, area;

//Solicitação ao usuario do valor da base do trangulo
printf ("INSIRA A MEDIDA DA BASE b DO TRIANGULO");
scanf ( "%i",&a );
//Solicitação ao usuario do valor da altura do trangulo
printf ("INSIRA A MEDIDA DA Altura h DO TRIANGULO");
scanf ( "%i",&b );


//Calculo area do triangulo
area = (a*b)/2;

//Mostrar resultado na tela
printf ("A AREA CORRESPONDE A %.1i", area);

//Fim de programa
return 0;
}
