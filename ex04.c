// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){

//declaraçao das variaveis
float a, b, c, d, media;    

//solicitacao das variaveis
printf("insira os valores para o calculo da media entre 4 valores");
scanf ( "%f",&a); 
scanf ( "%f",&b);
scanf ( "%f",&c);
scanf ( "%f",&d);
 
media = (a*b*c*d)/4;

//impressao em tela dos resultados obtidos
printf("O RESULTADO DA MEDIA ENTRE OS 4 NUMEROS DIGITADOS E DE %.1F", media);




return 0;
}
