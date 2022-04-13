#include <stdio.h>
#include <string.h>
int main(void) 
{ 

  struct Aluno{
    char* nome;
    struct{
      int dia;
      int mes;
      int ano;
    }dtNasc;
    int codigo;
  };
  struct Aluno Andre;
  Andre.nome= "André Filipe";
  Andre.dtNasc.dia = 07;
  Andre.dtNasc.mes = 02;
  Andre.dtNasc.ano = 2002;
  Andre.codigo = 20201;
  
  printf("%s", Andre);
  
}