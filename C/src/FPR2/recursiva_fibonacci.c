#include <stdio.h>

int fibonacciAux(int *indice, int objetivo, int x1, int x2,int xaux)
{
      if(*indice <= 2)
      {
            (*indice)++;
            return (fibonacciAux(indice, objetivo, x1, x2, 0));
      }
      else
      {
            if(*indice == objetivo )
            {
                  (*indice)++;
                  return x1+x2;
            }
            else
            {
                  (*indice)++;
                  xaux = x1;
                  if(x1 != x2)
                  {
                        x1 = x2;
                  }
                  x2 += xaux;

                  return (fibonacciAux(indice, objetivo, x1, x2, 0));
            }
      }
}

int fibonacci(int indice)
{
      int atual = 1;
      return (fibonacciAux(&atual,indice, 1, 1, 0));
}


int main()
{
      printf("%d", fibonacci(20));
}