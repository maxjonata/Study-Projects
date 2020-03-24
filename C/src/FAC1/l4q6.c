/*
QUESTÃO 06:
Criar um programa que exiba os N primeiros termos da seguinte série:
1,2,8,64,1024,...
*/
#include <stdio.h>

int main()
{
    int n, i, conta = 2, numero = 1;

    printf("Digite o numero inteiro N limite: ");
    scanf(" %d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("%d, ", numero);
        numero *= conta;
        conta += conta;
    }
}