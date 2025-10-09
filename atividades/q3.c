//Faça um programa que leia dois inteiros A e B, e exiba a divisão e o resto de A por B
#include <stdio.h>
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int divisao = a/b;
  int resto = a%b;
  printf("A divisao dos dois eh: %d\n", divisao);
  printf("O resto dos dois eh: %d\n", resto);
  return 0;
}
