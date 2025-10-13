/*
Crie um procedimento que apenas imprime "Esse minicurso é muito bom!".

Chame-o na main.
*/
#include <stdio.h>
int minha_funcao(){
  char mensagem[] = "Esse minicurso eh muito bom!";
  printf("%s\n", mensagem);
  return 0;
}
int main(){
  minha_funcao();
  return 0;
}
