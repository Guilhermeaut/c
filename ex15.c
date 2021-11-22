// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main(int argc, char *argv[]){
int peso;
float altura, imc;
printf("informe o peso em kilogramas:\n");
scanf("%f",&peso);

printf("informe a altura em metros:\n");
scanf("%f",&altura);

imc=peso/(altura*altura);


  printf("\nIMC = %.2f", imc);
  if (imc < 20)
     printf(" (abaixo do peso).");
  else if ((imc >= 20) && (imc < 25))
          printf(" (peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (acima do peso).");
            
}
