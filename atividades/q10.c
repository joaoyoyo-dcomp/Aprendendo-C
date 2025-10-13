/*
Escreva fibonacci
*/
#include <stdio.h>
int fib(int n){
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fib(n-1) + fib(n-2);
}
int main(){
  int numero;
  printf("Insira o valor de n\n");
  scanf("%d",&numero);
  int fibonacci = fib(numero);
  printf("Fibonacci de %d\n", fibonacci);
  return 0;
}
