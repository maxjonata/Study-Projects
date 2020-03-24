#include <stdio.h>

/*
QUESTÃO 04: Desenvolva um algoritmo que calcule o consumo de combustível de um automóvel em determinada viagem. Para isso, devem ser obtidos: 
i) o percurso (em quilômetros) da viagem; 
ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l); e 
iii) o preço do litro do combustível.

Ao final, o algoritmo deve determinar:
• A quantidade de combustível, em litros, consumida durante a viagem;
• O custo total de combustível.
*/

int main()
{
    float percursoViagem,kmPorCombustivel,precoCombustivel;

    printf("Percuro da viagem ( em km ): ");
    scanf(" %f", &percursoViagem);
    printf("\nNumero de quilometros que o carro percorre com um litro de combustível (km/l): ");
    scanf(" %f", &kmPorCombustivel);
    printf("\nPreco do litro do combustível: ");
    scanf(" %f", &precoCombustivel);

    printf("\nQuantidade de combustivel em litros consumida durante a viagem: %.2f", percursoViagem / kmPorCombustivel);
    printf("\nCusto total de combustivel: %.2f", (percursoViagem / kmPorCombustivel) * precoCombustivel);
}