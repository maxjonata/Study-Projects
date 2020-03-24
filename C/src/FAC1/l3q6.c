/*
QUESTÃO 06: Faça um programa que leia um número N inteiro, menor do que 20 (se for maior ou igual a 20,
 o programa deve exibir uma mensagem de erro). Após isso, o programa deve imprimir os números no intervalo de 1 a 99 cujos algarismos somem N.
*/

#include <stdio.h>

int main()
{
    int i, numero;

    printf("Digite um numero N inteiro: ");
    scanf(" %d", &numero);
    if(numero >= 20)
    {
        printf("\n\nERRO.");
    }
    else
    {
        for( i = 1 ; i <= 99 ; i++ )
        {
            if((int)(i/10) + (i - (((int)(i/10)) * 10)) == numero)
            {
                printf("%d ", i);
            }
        }
    }
}