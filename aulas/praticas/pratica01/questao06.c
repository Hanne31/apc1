//6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
#include <stdio.h>
#include <math.h>
int main(){
  int a = 1;
  int b = -5;
  int c = 6;
  float delta = b * b - 4 * a * c;
  float raiz1 = (-b + sqrt(delta)) / (2 * a);
  float raiz2 = (-b - sqrt(delta)) / (2 * a);
  printf("As raizes da equação são %f e %f", raiz1, raiz2);
  return 0;
  
  
    
}