#include <stdio.h>

int main(void) {
  int numero1, numero2;
  // Um algoritmo que leia dois valores inteiro distintos e informe qual deles é
  // o maior.
  printf("\t digite o numero: ");
  scanf("%d", &numero1);

  printf("\t digite o outro numero: ");
  scanf("%d", &numero2);

  if (numero1 > numero2)
    printf("%d é maior ", numero1);
  else if (numero2 > numero1)
    printf("%d é maior ", numero2);

  return 0;
}