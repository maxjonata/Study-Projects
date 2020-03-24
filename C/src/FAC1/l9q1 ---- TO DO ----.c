/*
Questão 01:
Analise o código apresentado a seguir e forneça todos os valores exibidos durante a execução do programa:
*/
#include <stdio.h>

void funcao01(int v[], int tam, int pos)
{
    // primeira execução recebe v{1,2,3,4,5}, tam 5, pos 0
    int i;
    for (i = tam - 1; i >= pos; i - = 2)
    {
        //1°:   i = 4       4 >= 0      v[4] = 5 * 2 = 10
        //1°:   i = 2       2 >= 0      v[2] = 3 * 2 = 6
        //1°:   1 = 0       0 >= 0      termina
        v[i] = v[i] * 2;
    }
}

void funcao02(int x)
{
    x++;
}

void funcao03(int v[], int tam)
{
    //1° v{1,2,6,4,10}, tam 5
    int i;
    for (i = 0; i < tam; i++) // 0 -> 5
    {
        printf(" %d", v[i]);
    }
    printf("\n");

    //1° printa = {1,2,6,4,10}
}

int main()
{
    int i, vet[] = {1, 2, 3, 4, 5};
    int quant = 5;
    for (i = 0; i < quant; i++) // 0 -> 5
    {
        if (i % 2 == 0) //se i for par...    0,2,4
        {
            funcao01(vet, quant, i);
        }
        else
        {
            funcao02(vet[i]);
        }
        funcao03(vet, quant);
        //i = 0      {1,2,6,4,10}
        //i = 1      {1,2,6,4,10}
        //i = 2
        //i = 4
    }
}