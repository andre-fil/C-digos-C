#include <stdio.h>
#include <string.h>
int main(void) 
{ 
int num;
int fat = 1;
int cont = num;
printf("Informe um número: \n");
scanf("%d", &num);

for(int i=1;i <= num;i++){
  fat *= i;
}
printf("O fatorial de %d é %d", num, fat);

}