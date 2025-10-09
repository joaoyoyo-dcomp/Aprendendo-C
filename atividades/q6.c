//Faça um programa que leia o peso (em kg) e a altura (em metros) e exiba o imc correspondente
#include <stdio.h>
int main(){
  float kg;
  float h;
  printf("O peso e a altura da pessoa sao:\n");
  scanf("%f %f", &kg, &h);
  float imc = kg/(h*h);
  printf("O seu IMC eh: %.2f\n", imc);
  return 0;
}
