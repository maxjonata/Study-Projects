/*
QUESTÃO 05:
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,4,8,16,32,...
*/
#include <stdio.h>

int main()
{
    int i,n,multiplo = 1;
    
    printf("Digite o numero limite inteiro n: ");
    scanf(" %d", &n);
    printf("\n");

    for( i = 1; i < n ; i++ )
    {
        printf("%d,", multiplo);
        multiplo*=2;
    }
    printf("%d", multiplo);
}