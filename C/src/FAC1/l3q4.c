/*
QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as seguintes informações:
a) A quantidade de valores negativos digitados;
b) A média dos valores positivos.
*/
#include <stdio.h>

int main()
{
    int i,negativos = 0,positivos = 0;
    float numero,mediaPositivos = 0;

    for( i = 0 ; i < 300 ; i++ )
    {
        printf("digite o %do numero real", i+1);
        scanf(" %f", &numero);
        if(numero > 0)
        {
            positivos++;
            mediaPositivos+=numero;
        }
        else{negativos++;}
    }
    mediaPositivos/=positivos;
    printf("Quantidade de nevativos digitados: %d", negativos);
    printf("Media dos valores positivos: %f", mediaPositivos);
}