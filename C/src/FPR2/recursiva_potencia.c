#include <stdio.h>

int potencial(int numero, int elevado) 
{
      return (elevado >= 1)?numero * potencial(numero, elevado - 1):1;
}

int main()
{
      int numero, potencia;

      scanf(" %d", &numero);
      scanf(" %d", &potencia);
      printf("%d^%d = %d", numero, potencia, potencial(numero, potencia));
}