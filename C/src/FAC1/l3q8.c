/*
QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informações dos seus 250 funcionários. 
Cada funcionário deverá responder um questionário ao qual informará os seguintes dados: matrícula, sexo, idade, salário e tempo (em anos) de trabalho na empresa. 
A execução do programa deve exibir os seguintes itens:
a) Matrícula de todos os funcionários que ingressaram na empresa com menos de 21 anos;
b) Quantidade de funcionários do sexo feminino;
c) Média salarial dos homens.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, idade, tempoDeTrabalho, matricula, menosDe21[250],matriculaquant = 0, mulheres = 0, homens = 0;
    float salario, mediaHomensSalario = 0;
    char sexo;

    for ( i = 0 ; i < 250 ; i++ )
    {
        system("cls");
        printf("\nmatricula [numero]: ");
        scanf(" %d", &matricula);
        do
        {
            printf("\nsexo [M/F]: ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        }
        while(sexo != 'M' && sexo != 'F');
        printf("\nidade: ");
        scanf(" %d", &idade);
        printf("\nsalario: ");
        scanf(" %f", &salario);
        printf("\ntempo de trabalho na empresa(em anos): ");
        scanf(" %d", &tempoDeTrabalho);

        if(sexo == 'F')
        {
            mulheres++;
        }
        else
        {
            homens++;
            mediaHomensSalario+=salario;
        }
        if((idade-tempoDeTrabalho) < 21)
        {
            menosDe21[matriculaquant] = matricula;
            matriculaquant++;
        }
    }
    mediaHomensSalario /= homens;

    printf("\nA) ");
    for( i = 0 ; i < matriculaquant ; i++ )
    {
        printf("%d ", menosDe21[i]);
    }
    printf("\nB) %d funcionarios do sexo feminino", mulheres);
    printf("\nC) Media salarial dos homens: R$%.2f", mediaHomensSalario);
}