#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    horas = minutos = segundos = 0;

    scanf("%d", &segundos);
    minutos = segundos/60;
    segundos-= minutos * 60;

    horas = minutos/60;
    minutos-= horas * 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}