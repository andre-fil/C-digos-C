#include <stdio.h>

int main(){
  int *piValor1;
  int valor1;
  char *piValor2;
  char valor2;
  

  piValor1 = &valor1;
  piValor2 = &valor2;
 printf ("Endereco de valor1 = %d\n", piValor1); 
  printf ("Endereco de valor2 = %d\n", piValor2); 

piValor1++;
piValor2++;

 printf ("Endereco de valor1 = %d\n", piValor1); 
  printf ("Endereco de valor2 = %d\n", piValor2); 


  
}