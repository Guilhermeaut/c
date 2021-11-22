// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

// Declaração das variáveis de compra
float a, b, c, d, e, cash, troco;

//Solicitação ao usuario do valor do produto
printf ("INSIRA O VALOR DO PRODUTO EM REAIS(moeda)");
scanf ( "%f",&a );

printf ("INSIRA O VALOR DO PRODUTO EM REAIS(moeda)");
scanf ( "%f",&b );

printf ("INSIRA O VALOR DO PRODUTO EM REAIS(moeda)");
scanf ( "%f",&c );

printf ("INSIRA O VALOR DO PRODUTO EM REAIS(moeda)");
scanf ( "%f",&d );

printf ("INSIRA O VALOR DO PRODUTO EM REAIS(moeda)");
scanf ( "%f",&e );

printf ("INSIRA O VALOR PAGO PELO CLIENTE EM REAIS(moeda)");
scanf ( "%f",&cash );

//ação de calculo de compra(solicitar ao professor uma forma de usar variaveis infinitas)
troco= cash-(a+b+c+d+e);

//demonstração de troco do cliente mostrada em tela
printf ("O TROCO E DE %.2f",troco);

//fim de trablho
return 0;
}