/*
QUESTÃO 03: Implementar um programa que calcule o valor de base ^ expoente, onde base e expoente são números inteiros dados pelo usuário.
*/
#include <stdio.h>

int main()
{
    int i;
    float base, expoente, conta;
    printf("Digite a base: ");
    scanf(" %f", &base);
    printf("\nDigite o expoente: ");
    scanf(" %f", &expoente);

    conta = base;
    for(i=1;i<expoente;i++)
    {
        conta*=expoente;
    }

    printf("\n\n %f^%f = %f", base,expoente,conta);
}