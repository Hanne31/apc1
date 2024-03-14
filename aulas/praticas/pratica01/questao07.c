#include <stdio.h>
int main() {
   float valor_da_hora_trabalhadas = 150.00;
   float total_horas_trabalhadas = 100;

  const float IR = 0.25f;  cv
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_trabalhadas * total_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  printf("------------------------------\n");
  printf("  C O N T R A C H E Q U E     \n");
  printf("------------------------------\n");
  printf("Salario Bruto.....: R$ %8.2f\n", salario_bruto);
  printf("Imposto Renda.....: R$ %8.2f\n", imposto_renda);
  printf("Imposto Previ.....: R$ %8.2f\n", imposto_previ);
  printf("Salario Liquido...: R$ %8.2f\n", salario_liquido);
  
  
}