// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

//entrada de dados 
float n1,n2, maior;

//indicação numero 1 e 2
printf ("DIGITE QUALQUER NUMERO:");
scanf("%f",&n1);
printf ("DIGITE QUALQUER OUTRO NUMERO:");
scanf("%f",&n2);

if(n1<n2){
printf("o menor numero e %.1f",n1);
}
if(n1>n2){
printf("o menor numero e %.1f",n2);}

return 0;
}