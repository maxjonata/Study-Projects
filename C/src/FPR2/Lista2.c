/*
QUESTÃO 01:
Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A.
*/

      int q1(int A[], int x)
      {
            int count = 0,i;
            int tamanhoA = sizeof(A);
            for(i = 0 ; i < tamanhoA ; i++)
            {
                  if (A[i] == x)
                  {
                        count++;
                  }
            }
            return count;
      }


/*
QUESTÃO 02:
Implementar uma função que, dado um vetor de reais, troque o 1 e o 2 elementos, em seguida o 3 e o 4 elementos e assim sucessivamente, 
até se chegar ao final do vetor.
*/

      void q2(float reais[])
      {
            float aux;
            int tamanhoArray = sizeof(reais);
            for( i = 0 ; i < tamanhoArray - 1 ; i+=2 )
            {
                  aux = reais[i];
                  reais[i] = reais[i+1];
                  reais[i+1] = aux;
            }
      }

/*
QUESTÃO 03:
Pede-se a implementação de uma função que, dado um vetor contendo números reais, determine se o mesmo encontra-se ordenado de forma crescente.
*/

      int q3(float reais[])
      {
            int i;
            int tamanhoArray = sizeof(reais);
            for( i = 0 ; i < tamanhoArray - 1 ; i+=2 )
            {
                  if(reais[i] > reais[i+1])
                  {
                        return 0;
                  }
            }
            return 1;
      }

/*
QUESTÃO 04:
Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...
Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 3º é igual a 2, entre o 3º e o 4º é igual a 3, e assim sucessivamente.
*/

      void q4(int vetor[])
      {
            int numero = 0, i;
            for( i = 0 ; i < 50 ; i++ )
            {
                  numero+= (i+1);
                  vetor[i] = numero;
            }
      }

/*
QUESTÃO 05:
Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.
*/

      void q5(int conjunto[300], int conjuntoPares[], int conjuntoImpares[])
      {
            int i, j, k;
            for(i = 0, j = 0, k = 0, i < 300 ; i++)
            {
                  if(conjunto[i]%2 == 0)
                  {
                        conjuntoPares[j] = conjunto[i];
                        j++;
                  }
                  else
                  {
                        conjuntoImpares[k] = conjunto[i];
                        k++;
                  }
            }
      }

/*
QUESTÃO 06:
Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número A pelo número B.
*/

      void q6(float reais[], float A, float B)
      {
            int tamanhoArray = sizeof(reais);
            int i;
            for( i = 0 ; i < tamanhoArray ; i++ )
            {
                  if(reais[i] == A) { reais[i] = B }
            }
      }

/*
QUESTÃO 07:
Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. Ao final, retornar o número de remoções realizadas.
*/

      int q7(float vetor[], float elemento)
      {
            int remocoes = 0, i;
            int tamanhoVetor = sizeof(vetor);
            for( i = 0 ; i < tamanhoVetor ; i++ )
            {
                  if(vetor[i] == elemento)
                  {
                        vetor[i] = vetor[tamanhoVetor];
                        tamanhoVetor--;
                        remocoes++;
                  }
            }
      }

/*
QUESTÃO 08:
Dados um vetor de reais (cujos elementos estão ordenados crescentemente) e um número x, 
retornar a posição da primeira ocorrência de x (caso encontre-se no vetor) ou a posição na qual deveria estar (caso contrário).
*/

      int q8(float reais[], float x)
      {
            int quantidade = sizeof(reais);
            int min, max, metade;
            for(min = 0, max = quantidade, metade = (quantidade / 2) ; max != min ; metade = (max - min / 2))
            {
                  if(reais[metade] == x)
                  {
                        return metade;
                  }
                  else
                  {
                        if(reais[metade] > x)
                        {
                              max = metade;
                        }
                        else
                        {
                              min = metade;
                        }
                  }
            }
            return min;
      }

/*
QUESTÃO 09:
Implementar a função de inserção de determinado elemento em um vetor ordenado crescentemente (dica: utilizar a função do item 08 para auxiliar).
QUESTÃO 10:
Fazer um função que, dados dois vetores A e B com números inteiros, gerar o vetor C que consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no conjunto A, nem no conjunto B.
QUESTÃO 11:
Fazer um função que, dados dois vetores A e B com números inteiros, gerar o vetor C que consiste na intersecção dos dois primeiros.
*/