//Faça um programa que leia um inteiro A e exiba o último dígito de A
#include <stdio.h>
int main(){
  int a;
  scanf("%d", &a);
  printf("O último digito é %d\n", a%10);
  return 0;
}
