/*
QUESTÃO 01: Faça um programa que leia um número inteiro x e, em seguida, solicite ao usuário outros 50 valores inteiros. 
Ao final, o programa deve exibir o total de múltiplos de x fornecidos.
*/

#include <stdio.h>

int main()
{
    int i, y, x, multiplos = 0;

    printf("informe um numero inteiro x: ");
    scanf(" %d", &x);
    for (i = 0; i < 50; i++)
    {
        printf("\ndigite um valor inteiro: ");
        scanf(" %d", &y);

        if (y % x == 0)
        {
            multiplos++;
        }
    }
    printf("\n\n %d numeros sao multiplos de x", multiplos);
}