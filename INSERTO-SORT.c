#include <stdio.h>
/*
insert sort

*/

int main(){
  int vetor[5];
  vetor[0] = 100;
  vetor[1] = -25;
  vetor[2] = 300;
  vetor[3] = -10;
  vetor[4] = 7;
  int tam = sizeof(vetor) /  sizeof(vetor[0]);


  //loop que garante que cada elemento será comparado com os elementos anteriores
  for(int j = 1;j <= tam; j++){
    // guardando o valor a ser comparado em cada loop
    int chave = vetor[j];
    int i = j - 1;

    //laço que realizará a comparação entre os elementos anteriores ao elemento chave
    while((i>=0) && (vetor[i] > chave)){
      //trocando o elemento maior e menor de lugar
      vetor[i + 1] = vetor[i];
      i = i-1;
    }
      vetor[i+1] = chave;
  }

  //retornar vetor
  for(int k = 0; k < tam; k++){
    printf("%d ", vetor[k]);
  }
}