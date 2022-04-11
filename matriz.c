#include <stdio.h> 
#define DIMENSAO 2

int main (void) 
{ 
int iLinha, iColuna;
int iDeterminante;
int iValorA; 
int aMatriz [DIMENSAO][DIMENSAO];

/* Uma regra que se pode sempre levar em consideração:
para cada dimensão de uma matriz, sempre haverá um laço 
(normalmente um for). Se houver duas dimensões, então haverá dois laços. */ 

for (iLinha=0; iLinha < DIMENSAO; iLinha++) 
{ 
for (iColuna=0; iColuna < DIMENSAO; iColuna++) 
{ 
printf ("Entre item %d %d:", iLinha + 1, iColuna + 1); 
scanf("%d", &iValorA); 
aMatriz [iLinha][iColuna] = iValorA; 
} 
} 
iDeterminante = aMatriz[0][0] * aMatriz [1][1] - 
aMatriz[0][1] * aMatriz [1][0]; 
printf ("Determinante : %d\n", iDeterminante); 
 return 0; 
}