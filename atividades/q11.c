//Crie uma função recursiva que receba um inteiro não negativo N, e retorne o valor do fatorial de N.

#include <stdio.h>
int fat(int n){
  if (n == 0)
    return 1;
  return n*fat(n-1); 
}
int main(){
  int numero;
  printf("Digite o valor de n\n");
  scanf("%d", &numero);
  int fatorial = fat(numero);
  printf("Fatorial tal eh %d\n", fatorial);
  return 0;
}
