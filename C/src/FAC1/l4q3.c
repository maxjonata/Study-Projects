/*
QUESTÃO 03:
Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.
*/

#include <stdio.h>

int main()
{
    int n,i;
    
    printf("digite numero n: ");
    scanf(" %d", &n);
    printf("\nDivisores: ");
    for( i = 0 ; i < n ; i++)
    {
        if(i%n == 0)
        {
            printf("%d ", i);
        }
    }
}