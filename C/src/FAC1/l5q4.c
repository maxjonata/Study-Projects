/*
QUESTÃO 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, coletando dados sobre o salário e número de filhos. 
A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 1.000,00.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,numeroDeFilhos,mediaFilhos = 0,salarioAteMil = 0;
    float salario,maiorSalario = 0, mediaSalario = 0;
    for (i = 0; i < 300; i++)
    {
        printf("digite seu salario: R$");
        scanf(" %f", &salario);
        printf("\nnumero de filhos: ");
        scanf(" %d", &numeroDeFilhos);

        mediaSalario += salario;
        mediaFilhos += numeroDeFilhos;
        if(salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        if(salario > 1000)
        {
            salarioAteMil++;
        }
    }
    mediaSalario/=300;
    mediaFilhos/=300;
    //media salario:  (salarioAteMil/300)*100
    // a) média do salário da população;
    printf("\nMedia do salario da populacao: R$%.2f", mediaSalario);
    // b) média do número de filhos;
    printf("\nMedia do numero de filhos: %d", numeroDeFilhos);
    // c) maior salário;
    printf("\nMaior salario: R$%.2f", maiorSalario);
    // d) percentual de pessoas com salário até R$ 1.000,00.
    printf("\nPercentual de pessoas com salario ate R$ 1000.00:  %d%%", ((salarioAteMil/300)*100));
}