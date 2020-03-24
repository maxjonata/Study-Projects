/*
      Leia um valor de ponto flutuante com duas casas decimais. 
      Este valor representa um valor monetário. 
      A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
      As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
      A seguir mostre a relação de notas necessárias.

      Entrada
      O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

      Saída
      Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
*/
#include <stdio.h>
#include <math.h>

int contagem(int *num, int slice)
{
      int sliceqtd = 0;

      while( (*num) >= slice )
      {
            sliceqtd++;
            *num -= slice;
      }

      return sliceqtd;
}

int main()
{
      int valor;
      double value;
      int notas100,notas50,notas20,notas10,notas5,notas2;
      int moedas1,moedas050,moedas025,moedas010,moedas005;

      scanf(" %lf", &value);
      valor = value * 100;

      notas100 = contagem(&valor, 10000);
      notas50 = contagem(&valor, 5000);
      notas20 = contagem(&valor, 2000);
      notas10 = contagem(&valor, 1000);
      notas5 = contagem(&valor, 500);
      notas2 = contagem(&valor, 200);

      moedas1 = contagem(&valor, 100);
      moedas050 = contagem(&valor, 50);
      moedas025 = contagem(&valor, 25);
      moedas010 = contagem(&valor, 10);
      moedas005 = contagem(&valor, 5);

      printf("NOTAS:");
      printf("\n%d nota(s) de R$ 100.00", notas100);
      printf("\n%d nota(s) de R$ 50.00", notas50);
      printf("\n%d nota(s) de R$ 20.00", notas20);
      printf("\n%d nota(s) de R$ 10.00", notas10);
      printf("\n%d nota(s) de R$ 5.00", notas5);
      printf("\n%d nota(s) de R$ 2.00", notas2);

      printf("\nMOEDAS:");
      printf("\n%d moeda(s) de R$ 1.00", moedas1);
      printf("\n%d moeda(s) de R$ 0.50", moedas050);
      printf("\n%d moeda(s) de R$ 0.25", moedas025);
      printf("\n%d moeda(s) de R$ 0.10", moedas010);
      printf("\n%d moeda(s) de R$ 0.05", moedas005);
      printf("\n%d moeda(s) de R$ 0.01\n", valor);


}

