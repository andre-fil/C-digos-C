#include <stdio.h>
/*
Fazer um programa em C que implemente o algoritmo 1.1 para acessar 
elementos de vetores via ponteiros. Crie uma função: 
imprime_array_elemento(int *aArray, int iElemento);
(pag 4 - estruturas de dados com algorítmos e c)

*/

///Definindo função
int imprime_array_elemento(int *aArray, int iElemento){
  int* pos = aArray + iElemento;
  return *pos;
};

int main(){
  int* aArray;
  int iElemento;
  int vetor[5];
  ///Preenchendo vetor
  vetor[0] = 1;
  vetor[1] = 2;
  vetor[2] = 3;
  vetor[3] = 30;
  vetor[4] = 80;
  aArray = &vetor[0];
   int teste = imprime_array_elemento(aArray,4);

printf("%d\n", teste);

  
}