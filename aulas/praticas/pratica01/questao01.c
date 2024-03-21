#include <stdio.h>
//1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
  int main(void){
    float a1, a2, media;
    printf("Entre com a nota a1:"); 
    scanf("%f", &a1);
    printf("Entre com a nota a2:");
    scanf("%f", &a2);
    media = 0.4 * a1 + 0.6 * a2;
    printf("A media final é %.1f\n", media);

    return 0;
  }
