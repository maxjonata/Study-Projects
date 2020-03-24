#include <stdio.h>

/*

Questão 01:
Desenvolver uma função que exiba os múltiplos de N compreendidos no intervalo definido por A e B.
*/

      void q1(int n, int a, int b)
      {
            int i;

            for( i = a; i <= b ; i++ )
            {
                  printf(" %d", n*i);
            }
      }

/*

QUESTÃO 02:
Implementar uma função que converta determinada temperatura em graus Celsius para graus Fahrenheit.
*/

      float q2(float celsius)
      {
            return ((celsius * 1.8) + 32);
      }

/*

QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci.
*/

      int q3(int n)
      {
            int i, numero, ultimo, penultimo;
            ultimo=penultimo=1;

            switch(n)
            {
                  case 0:
                        return 0;
                  case 1:
                  case 2:
                        return 1;
            }

            for(i = 3 ; i <= n ; i++)
            {
                  numero = ultimo + penultimo;
                  penultimo = ultimo;
                  ultimo = numero;
            }

            return(numero);
      }

/*

QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo divisor comum) entre dois números.
*/

      int q4(int n1, int n2)
      {
            //utilizando algoritmo de euclides
            int mdc, resto, maior, menor;

            if(n1 > n2)
            {
                  maior = n1;
                  menor = n2;
            }
            else
            {
                  maior = n2;
                  menor = n1;
            }

            if(maior%menor == 0)
            {
                  return menor;
            }

            do
            {
                  mdc = resto;
                  resto = maior % menor;
                  maior = menor;
                  menor = resto;
            } while (resto != 0);

            return mdc;
      }

/*

QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo múltiplo comum) entre dois números.
*/

      int q5(int n1,int n2)
      {
            int i, aux1 = n1, aux2 = n2, menor;
            int mmc = 0;
            if(n2 < n1)
            {
                  menor = n2;
            }
            else{
                  menor = n1;
            }

            for(i = 2 ; i <= menor ; i++)
            {
                  if(n1 % i == 0 && n2 % i == 0)
                  {
                        n1 = n1/i;
                        n2 = n2/i;
                        mmc = (n1 * aux2);
                        i--;
                  }
            }
            return (mmc);
      }

/*

QUESTÃO 06:
Implementar uma função que, dado um número inteiro N, exiba uma sequência de números como as ilustradas nos exemplos a seguir:

Exemplo 1: N = 3
(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)
Exemplo 2: N = 5
(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1) (3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5 3) (5 4)
*/

      void q6(int n)
      {
            int n1 = 1,n2 = 2;
            while((n1 != n) || (n2 != (n-1)))
            {
                  printf(" (%d %d)", n1, n2);
                  n2++;
                  if(n2 == n1)
                  {
                        n2++;
                  }
                  if(n2 == n+1)
                  {
                        n1++;
                        n2 = 1;
                  }
            }
      }

/*

QUESTÃO 07:
Implementar uma função que, dado um número inteiro n, e o intervalo definido pelos números a e b, 
determine quantos valores do intervalo possuem divisores (sendo estes diferentes de 1) que também sejam divisores de n.
Exemplo:
      n = 6
      a = 10 e b = 20
      Resposta = 7 (pois os números 10, 12, 14, 15, 16, 18 e 20 possuem divisores em comum com o número 6).
*/

      int q7(int n, int a, int b)
      {
            int qtd = 0, i, j, menor, maior;

            menor = (a>b)?b:a;
            maior = (a<b)?b:a;

            for(i = menor ; i <= maior ; i++)
            {
                  for(j = 2; j <= n; j++)
                  {
                        if(n%j==0 && i%j==0)
                        {
                              qtd++;
                              break;
                        }
                  }
            }

            return qtd;            
      }

/*

QUESTÃO 08:
Desenvolver uma função que exiba todos os números primos inferiores a determinado valor inteiro N.
*/

      void q8(int n)
      {
            int i, j, check = 1;

            for(i = 1; i < n; i++)
            {
                  for(j = i-1 ; j > 1 ; j--)
                  {
                        if(i%j==0)
                        {
                              check = 0;
                              break;
                        }
                  }
                  if(check == 1)
                  {
                        printf(" %d", i);
                  }
                  check = 1;
            }
      }

/*

QUESTÃO 09:
Implementar uma função que, dado um número inteiro, calcule (e retorne) a soma e a média de seus divisores.
*/

      float q9(int n, int *soma)
      {
            int i, divisores = 0, sum = 0;
            for(i = 2 ; i < n ; i++)
            {
                  if( n % i == 0)
                  {
                        sum += i;
                        divisores++;
                  }
            }
            *soma = sum;
            return (sum/(float)divisores);            
      }

//

int main()
{
      int som;
      float divd;
      divd = q9(6, &som);
      printf("media%.2f som%d", divd, som);
}