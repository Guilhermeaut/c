// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis de cambio
float a, cambio;

//Solicitação ao usuario do valor dinheiro
printf ("INSIRA O VALOR EM REAIS(moeda)");
scanf ( "%f",&a );

cambio= (a*5.25);

//impressao em tela do calculo de cotaçao
printf("o valor correspondente em dolares americanos segundo a cotacao do dia 17 de agosto de 2021 e de %.2f$",cambio);
return 0;
}