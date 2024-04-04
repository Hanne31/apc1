#include <math.h>
#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero:");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero:");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtracao dos numeros é: %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicacao dos numeros é: %i\n", multiplicacao);

  float divisão = 1.0f * numero1 / numero2;
  printf("A divisão dos numeros é: %f\n", divisão);

  int resto = numero1 % numero2;
  printf("O resto da divisão dos numeros é: %i\n", resto);

  // numero1 = numero1 + 1
  // incremento
  printf("O incremento do primeiro numero é: %i\n", numero1++);
  printf("O incremento do primeiro numero é: %i\n", ++numero1);

  // numero1 = numero1 - 1
  // decremento
  printf("O decremento do primeiro numero é: %i\n", numero1--);
  printf("O decremento do primeiro numero é: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é: %f\n", raiz_quadrada);

  double potencia = pow(numero1, 3);
  printf("A potencia do primeiro numero é: %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O log2 do primeiro numero é: %f\n", logaritmo2);

  const double PI = 3.1415;

  double seno = sin(numero1 * (PI / 180));
  printf("O seno do primeiro numero é: %f\n", seno);

  

  return 0;
}