//3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
#include <stdio.h>
#define  PI 3.1416
 int main(){
   int raio;
   float perimetro;
   printf("Entre com o raio:");
   scanf("%i", &raio);
   perimetro = 2 * PI * raio;
   printf("O perimetro da pizza é %.2f\n", perimetro);
   return 0;
  
}