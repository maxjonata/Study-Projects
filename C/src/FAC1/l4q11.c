/*
QUESTÃO 11:
Implementar um programa no qual o usuário informa um número e verifica-se se ele é um número triangular.
Obs.: Um número é triangular quando ele for resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4.
*/
#include <stdio.h>

int main()
{
    int i,numero;

    printf("informa o numero a ser verificado: ");
    scanf(" %d", &numero);

    for(i=1;i<numero;i++)
    {
        if(((i) * (i+1) * (i+2)) == numero)
        {
            i = numero-1;
            printf("\nÉ triangular...\n %d * %d * %d = %d", i,i+1,i+2,numero);
        }
        else
        {
            if(((i) * (i+1) * (i+2)) > numero)
            {
                i = numero-1;
                printf("\nNão é triangular.");
            }
        }
    }
}