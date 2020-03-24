/*
QUESTÃO 02:
Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.
*/
#include <stdio.h>

int main()
{
    int i,n,soma = 0;

    printf("digite o numero N: ");
    scanf(" %d", &n);

    for( i = 1 ; i <= n ; i++ )
    {
        soma += i;
    }
    printf("\n%d", soma);
}