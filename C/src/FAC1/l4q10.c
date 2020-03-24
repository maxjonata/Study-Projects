/*
QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo das pessoas. 
Faça um programa que leia as informações de 50 pessoas e informe:
 a maior e a menor alturas encontradas;
 a média de altura das mulheres;
 a média de altura da população;
 o percentual de homens na população.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i,homens = 0,mulheres = 0;
    float altura, maiorAltura = 0, menorAltura = sizeof(float), mediaAltura = 0,mediaAlturaMulheres = 0;
    char sexo;
    for (i = 0; i < 50; i++)
    {
        system("cls");
        printf("digite a sua altura em metros: ");
        scanf(" %f", &altura);
        do
        {
            printf("\ndigite o seu sexo [M/F]: ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        } while (sexo != 'M' && sexo != 'F');
        mediaAltura+=altura;

        if(sexo == 'M')
        {
            homens++;
        }
        else
        {
            mulheres++;
            mediaAlturaMulheres+=altura;
        }

        if(altura >= maiorAltura)
        {
            maiorAltura = altura;
        }
        if(altura <= menorAltura)
        {
            menorAltura = altura;
        }
    }
    system("cls");
    mediaAltura/=50;
    mediaAlturaMulheres/=mulheres;
    // percentual de homens:   (homens/50)*100;

    printf("maior altura encontrada: %.2f", menorAltura);                           // a menor altura encontrada;
    printf("\nmenor altura encontrada: %.2f", maiorAltura);                         // a maior altura encontrada;

    printf("\nmedia de altura das mulheres: %.2f", mediaAlturaMulheres);             // a média de altura das mulheres;

    printf("\nnedua de altura da populacao: %.2f", mediaAltura);                     // a média de altura da população;

    printf("\npercentual de homens na populacao: %.2f%%", (float)((homens/50)*100)); // o percentual de homens na população.
}