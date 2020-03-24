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

int main()
{
      float valor;
      int notas100,notas50,notas20,notas10,notas5,notas2;
      int moedas1,moedas050,moedas025,moedas010,moedas005,moedas001;

      scanf(" %f", &valor);

      notas100 = valor / 100.0 ;
      valor -= notas100 * 100 ;
      notas50 = valor / 50.0  ;
      valor -= notas50 * 50 ;
      notas20 = valor / 20.0 ;
      valor -= notas20 * 20 ;
      notas10 = valor / 10.0 ;
      valor -= notas10 * 10 ;
      notas5 = valor / 5.0 ;
      valor -= notas5 * 5 ;
      notas2 = valor / 2.0; 
      valor -= notas2 * 2 ;

      moedas1 = valor;
      valor -= moedas1;
      moedas050 = valor / 0.5 ;
      valor -= moedas050 * 0.5;
      moedas025 = valor / 0.25 ;
      valor -= moedas025 * 0.25 ;
      moedas010 = valor / 0.10 ;
      valor -= moedas010 * 0.10 ;
      moedas005 = valor / 0.05 ;
      valor -= moedas005 * 0.05 ;
      moedas001 = valor;

      printf("NOTAS:\n");
      printf("%d nota(s) de R$ 100.00\n", notas100);
      printf("%d nota(s) de R$ 50.00\n", notas50);
      printf("%d nota(s) de R$ 20.00\n", notas20);
      printf("%d nota(s) de R$ 10.00\n", notas10);
      printf("%d nota(s) de R$ 5.00\n", notas5);
      printf("%d nota(s) de R$ 2.00\n", notas2);
      printf("MOEDAS:\n");
      printf("%d moeda(s) de R$ 1.00\n", moedas1);
      printf("%d moeda(s) de R$ 0.50\n", moedas050);
      printf("%d moeda(s) de R$ 0.25\n", moedas025);
      printf("%d moeda(s) de R$ 0.10\n", moedas010);
      printf("%d moeda(s) de R$ 0.05\n", moedas005);
      printf("%d moeda(s) de R$ 0.01\n", moedas001);
}

