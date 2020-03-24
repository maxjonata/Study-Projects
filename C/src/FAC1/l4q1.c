/*
QUESTÃO 01:
Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N.
*/
#include <stdio.h>

int main()
{
    int n,i;

    printf("Digite numero inteiro N: ");
    scanf(" %d", &n);
    printf("\n");
    for( i = n ; i>0 ; i--)
    {
        if(i%2 == 00)
        {
            printf("%d", i);
        }
    }

}