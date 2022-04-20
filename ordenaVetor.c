#include <stdio.h>
/*
Ordena rum vetor de forma decrescente

*/

int main(){
  int aux;
  int vetor[5];
  vetor[0] = 1;
  vetor[1] = 70;
  vetor[2] = 3;
  vetor[3] = 4;
  vetor[4] = 5;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j <5; j++){
     if(vetor[i] > vetor[j]){
       aux = vetor[i];
       vetor[i] = vetor[j];
       vetor[j] = aux;
     }
      
    }
    
    }
  
  
for(int i = 0; i < 5; i++){
  printf("%d ",vetor[i]);

  }
  
}