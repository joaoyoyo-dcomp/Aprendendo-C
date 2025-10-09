//Faça um programa que leia o raio de um círculo e calcule a área e o perímetro
#include <stdio.h>
int main(){
  float raio;
  float pi = 3.14;
  printf("O raio é: %d\n");
  scanf("%f", &raio);
  float perimetro = 2*pi*raio;
  float area = pi*raio*raio;
  printf("o perimetro eh: %.2f\n", perimetro);
  printf("a area eh: %.2f\n", area);
  return 0;
}
