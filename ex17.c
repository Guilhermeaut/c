#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{ float a,b,c;
 
  printf("Digite o lado a : ");
  scanf("%f", &a);
  
  printf("Digite o lado b: ");
  scanf("%f", &b);

  printf("Digite o lado c: ");
  scanf("%f", &c);

  if ( ((a*a)==(b*b)+(c*c)) ||
       ((b*b)==(a*a)+(c*c)) ||
       ((c*c)==(b*b)+(a*a))
                            ){
                                printf("E um triangulo retangulo");
                            }
     else{
      printf("nao e um triangulo retangulo");
     }


    return 0;
}