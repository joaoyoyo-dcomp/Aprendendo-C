/*
Crie uma função que receba dois números inteiros A e B e retorne a soma deles.

Chame essa função na main e exiba o resultado.
*/
#include <stdio.h>
int minha_funcao(){
  int a;
  int b;
  printf("digite o valor de A e B\n");
  scanf("%d %d", &a, &b);
  printf("A+B = %d\n", a+b);
  return 0;
}
int main(){
    minha_funcao();
    return 0;
}
