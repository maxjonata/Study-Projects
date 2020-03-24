/*
QUESTÃO 08:
Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos arrecadados com a aplicação de multas de trânsito.
O programa deve ler as seguintes informações para cada motorista:
 O número da carteira de motorista;
 Número de multas;
 Valor da cada uma das multas.
Deve ser exibido o valor da dívida de cada motorista 
e ao final da leitura o total de recursos arrecadados (somatório de todas as multas). 
O programa também deverá apresentar o número da carteira do motorista que obteve o maior número de multas.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numeroCarteira, numeroDeMultas, carteiraMaisMultada,maiorQtdMultas = 0;
    float valorMulta, somatorioMultas = 0, dividaDoMotorista = 0;

    do
    {
        system("cls");
        printf("Digite o numero da carteira do motorista: ");
        scanf(" %d", &numeroCarteira);
        printf("\nDigite o numero de multas: ");
        scanf(" %d", &numeroDeMultas);
        for( i = 0; i < numeroDeMultas; i++)
        {
            printf("\nDigite o numero da multa (%d/%d).\n> R$", i+1,numeroDeMultas);
            scanf(" %f", &valorMulta);
            dividaDoMotorista+=valorMulta;
        }
        printf("\n Divida do motorista: R$%.2f", dividaDoMotorista);
        somatorioMultas += dividaDoMotorista;

        if(numeroDeMultas >= maiorQtdMultas)
        {
            carteiraMaisMultada = numeroCarteira;
        }

    } while(numeroCarteira > 0);

    system("cls");
    printf("Total de recursos arrecadados: R$%.2f", somatorioMultas);
    printf("\nCarteiraMaisMultada: %d", carteiraMaisMultada);
}