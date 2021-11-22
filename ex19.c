#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const [])
{
 
  float ac, vi, tp, v;

  printf("Digite a aceleracao em m/s^2: ");
  scanf("%f", &ac); 
 
  printf("Digite a velocidade inicial em m/s: ");
  scanf("%f", &vi); 

  printf("Digite o tempo do percurso em s: ");
  scanf("%f", &tp); 

 
  v=vi+(ac*tp);

  if(v<=40){
    printf("Veiculo Muito Lento");  
  }
   else if ( (40<v) && (v<=60) ){
      printf("Velocidade Permitida");   
   }
   else if ( (60<v) && (v<=80) ){
      printf("Velocidade de Cruzeiro");   
   }
   else if ( (80<v) && (v<=120) ){
      printf("Veiculo Rapido");   
   }
   else{
        printf("Veiculo Muito Rapido");   
   }
  


    return 0;
}