/*
QUESTÃO 02: Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e o menor elementos do conjunto fornecido.
*/
#include <stdio.h>

int main()
{
    int i, n;
    float valor, maiorValor = 0, menorValor = sizeof(float);
    printf("digite a quantidade de valores a serem lidos:");
    scanf(" %d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\ndigite um valor: ");
        scanf(" %f", &valor);

        if (valor >= maiorValor)
        {
            maiorValor = valor;
        }
        else
        {
            if (valor <= menorValor)
            {
                menorValor = valor;
            }
        }
    }

    printf("\n\nmenor valor: %f", menorValor);
    printf("\nmaior valor: %f", maiorValor);
}