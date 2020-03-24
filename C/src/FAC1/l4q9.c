/*
QUESTÃO 09:
Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha resto 5.
*/
#include <stdio.h>

int main()
{
    int i = 0, numero = 1000, divisor;

    do
    {
        numero++;

        if ((numero % 11) == 5)
        {
            i++;
            divisor = numero;
        }
    } while (i < 5);
    printf("%d", divisor);
}