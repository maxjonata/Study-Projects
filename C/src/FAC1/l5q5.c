/*
Elabore  um  programa  que calcule a média ponderada de n elementos.
Observação:   na   média   ponderada,   cada elemento possui um  peso que representa a sua contribuição no cálculo da média final.
*/

#include <stdio.h>

int main()
{
      int n;
      float elemento, peso, media = 0, pesos = 0, valor = 0;

      printf("\nQuantidade de elementos da media ponderada: ")
      scanf(" %d", &n);
      for( i = 0 ; i < n ; i++)
      {
            printf("\nDigite o %do elemento da média: ", i);
            scanf(" %f", &elemento);
            printf("\nDigite peso do %do elemento: ", i);
            scanf(" %f", &peso);

            pesos += peso;
            valor += elemento * peso;
      }
      media = valor / pesos;
}