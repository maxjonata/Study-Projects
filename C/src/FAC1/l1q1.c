#include <stdio.h>

int main() {

    //Variáveis

    float newCar,fabCost,distPercent,taxPercent;

    //Entrada
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &fabCost);
    printf("\nDigite a porcentagem do distribuidor: ");
    scanf("%f", &distPercent);
    printf("\nDigite a porcentagem dos impostos: ");
    scanf("%f", &taxPercent);

    //Processamento

    distPercent = fabCost*(distPercent/100);
    taxPercent = fabCost*(taxPercent/100);
    newCar = fabCost + distPercent + taxPercent;

    //Saídas

    printf("Custo do carro novo ao consumidor será:  R$ %.2f", newCar);

}