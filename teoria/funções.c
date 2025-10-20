/*
Funções

Sabemos que funções têm:
1. Assinatura
2. Escopo
3. Corpo
4. Retorno

Com base nisso, vamos criar uma função que recebe dois números inteiros A e B, e exibe o resultado de A+B, A-B, A*B, A/B e A%B
*/
#include <stdio.h>
int minha_funcao(int a, int b) //assinatura
{ //escopo 
printf("A+B\n", a+b); //corpo
printf("A-B\n", a-b); //corpo
printf("A*B\n", a*b); //corpo
printf("A/B\n", a/b); //corpo
  return a%b; //retorno
}
int main(){
  int retorno = minha_funcao(6,3);
  printf("retorno = %d\n", retorno);
  return 0;
}

/*
Observações:
Em c, funções devem ser declaradas antes da função main
Funções podem receber nenhum parâmetro
Funções podem retornar nada (dizemos que é void)
Função que recebe nada e retorna nada são chamadas de procedimento
*/
