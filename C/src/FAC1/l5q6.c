/*
QUESTÃO 06:Faça  um  programa  que  leia 200 números inteiros. 
Ao final, exibir:
a)    O    maior    número    fornecido,    de ordem  par  (isto  é,  o  maior  dentre  o segundo,  quarto,  sexto,  oitavo,  etc valores fornecidos).
b)    A média dos valores pares.
*/

#include <stdio.h>

int main()
{
      int pares=0,numero,maior = 0 - 32.767;
      float media = 0;

      printf("Digite os 200 numeros:\n\n");
      for( i = 0 ; i < 200 ; i++ )
      {
            scanf(" %d", &numero);
            if ( (i%2 == 0) && (numero >= maior) )
            {
                  maior = numero;
            }

            if(numero%2 == 0)
            {
                  pares ++;
                  media += numero;
            }
      }
      media /= pares;

      printf("Maior número de ordem par: %d", maior)
      printf("Media dos números pares: %f", media);
}