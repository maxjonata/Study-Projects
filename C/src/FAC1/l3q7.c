/*
QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto que foi lançado. 
Para cada pessoa entrevistada foram coletados os seguintes dados: sexo (M ou F) e resposta (G [Gostou] ou N [Não Gostou]). 
Sabendo-se que foram entrevistadas X pessoas, faça um programa que forneça:
a) Número de pessoas que gostaram do produto;
b) Número de pessoas que não gostaram do produto;
c) Informação dizendo em que sexo o produto teve uma melhor aceitação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char sexo,opiniao,continua;
    int homens = 0, homensGostaram = 0, homensNGostaram = 0, mulheres = 0, mulheresGostaram = 0, mulheresNGostaram = 0, gostaram = 0, nGostaram = 0;

    do
    {
        do
        {
            system("cls");
            printf("Digite seu sexo: ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        }
        while(sexo != 'F' && sexo != 'M');

        if(sexo == 'M')
        {
            homens++;
        }
        else
        {
            mulheres++;
        }

        do
        {
            system("cls");
            printf("\nDigite G para [Gostou] ou N para [Nao gostou]\n>");
            scanf(" %c", &opiniao);
            opiniao = toupper(opiniao);
        }
        while(opiniao != 'G' || opiniao != 'N');

        if(opiniao == 'G')
        {
            gostaram++;

            if(sexo == 'M')
            {
                homensGostaram++;
            }
            else
            {
                mulheresGostaram++;
            }
        }
        else
        {
            nGostaram++;

            if(sexo == 'M')
            {
                homensNGostaram++;
            }
            else
            {
                mulheresNGostaram++;
            }
        }
        do
        {
            system("cls");
            printf("Deseja continuar? [S/N]");
            scanf(" %c", &continua);
        }
        while(continua != 'S' && continua != 'N');
    }
    while(continua == 'S');
    system("cls");

    //a) Número de pessoas que gostaram do produto;
    printf("%d gostaram do produto.", gostaram);
    //b) Número de pessoas que não gostaram do produto;
    printf("\n%d não gostaram do produto.", nGostaram);
    //c) Informação dizendo em que sexo o produto teve uma melhor aceitação.
    if(homensGostaram - homensNGostaram > mulheresGostaram - mulheresNGostaram)
    {
        printf("\nMais aceitacao entre os homens.");
    }
    else
    {
        if(homensGostaram - homensNGostaram == mulheresGostaram - mulheresNGostaram)
        {
            printf("Mesma indice de aceitação entre homens e mulheres");
        }
        else
        {
            printf("Mais aceitacao entre as mulheres.");
        }
    }
}