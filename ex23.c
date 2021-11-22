int main(int argc, char *argv[]){
  int numero, numerob;
 
  printf("Digite um numero: ");
  scanf("%i", &numero);
   printf("Digite um numero: ");
  scanf("%i", &numerob);
 
  while(numerob >= numero){
    printf("Erro! digite um numero maior que o primeiro solicitadp: ");
    scanf("%i", &numerob);
  }
 
return 0;
}