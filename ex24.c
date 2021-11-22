#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
char sexo;

printf("Digite o sexo escolhido:  ");
scanf("%s",&sexo);

while ((toupper(sexo) != 'M') && (sexo != 'F')){
printf("sexo invalido!\nfavor digiet novamente:\n   ");
 scanf("%s", &sexo); 
}
printf("OBRIGADO");
return 0;


}








}

