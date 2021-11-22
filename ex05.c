// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis da temperatura
float a, temp;

//Solicitação ao usuario do valor da temperatura em Celsius
printf ("INSIRA A  TEMPERATURA EM GRAUS CELSIUS");
scanf ( "%f",&a );

temp= (a*1.8)+32;

//impressao em tela da temperatura em graus fahrenheit
printf("O CORRESPONDENTE DA TEMPERATURA ACIMA EM FAHRENHEIT E DE %.1f",temp);
return 0;



}