// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função principal do programa
main(int argc, char *argv[]){

//declaraçao das variaveis
float peso ,alt, imc;

//solicitação dos indices corporeos do usuario
printf ("DIGITE O SEU PESO(MASSA)");
scanf ( "%f",&peso);

printf ("DIGITE O SUA ALTURA");
scanf ( "%f",&alt);

//Calculo de IMC
imc= peso/pow(alt,2);

//IMC calculada impressa em tela
printf ("O IMC OBTIDO E %.2f",imc);

return 1;







}