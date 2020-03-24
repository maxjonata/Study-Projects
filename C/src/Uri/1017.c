#include <stdio.h>

int main()
{
    double quantidade_de_litros;
    int horas_gastas, velocidade_media;

    scanf("%d %d", &horas_gastas, &velocidade_media);
    quantidade_de_litros = (horas_gastas * velocidade_media)/12.0;

    printf("%.3lf\n", quantidade_de_litros);
}