/*
Estrutura de switch-case
  switch(variável){
  case (constante1):
  comando;
  comando;
  break;
  case (constante2):
  comando;
  comando;
  break;
  ...
    default:
  comando;
  comando;
  }

Sem o break, ele não vai parar quando chega a hora desejada, o que vai tirar o sentido do código
*/
//exemplo: dia da semana
#include <stdio.h>
int main(){
  int dia;
  scanf("%d", &dia);
  switch(dia){
    case 1: printf("Domingo\n"); break;
    case 2: printf("Segunda-feira\n"); break;
    case 3: printf("Terça-feira\n"); break;
    case 4: printf("Quarta-feira\n"); break;
    case 5: printf("Quinta-feira\n"); break;
    case 6: printf("Sexta-feira\n"); break;
    case 7: printf("Sabado\n"); break;
    default: printf("valor invalido\n");
  }
  return 0;
}
