/*
QUESTÃO 07:
Desenvolver um programa no qual o usuário entre com vários números inteiros e positivos e imprima o produto dos números ímpares e a soma dos números pares.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, produtoImpares = 1, somaPares = 0;

    do
    {
        system("cls");
        printf("digite numero inteiro e positivo: ");
        scanf(" %d", &numero);
        if ((numero % 2) == 0)
        {
            somaPares += numero;
        }
        else
        {
            produtoImpares *= numero;
        }
    } while (numero > 0);

    system("cls");
    printf("Produto dos impares: %d", produtoImpares);
    printf("\nSoma dos pares: %d", somaPares);
}