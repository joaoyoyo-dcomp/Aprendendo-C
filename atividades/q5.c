//Faça um programa que leia três notas, calcule e exiba a média
#include <stdio.h>
int main(){
  int a, b, c;
  printf("O aluno tirou as notas:\n");
  scanf("%d %d %d", &a, &b, &c);
  float media = (a+b+c)/3.0;
  printf("A média das notas é: %.2f\n", media);
  return 0;
}
