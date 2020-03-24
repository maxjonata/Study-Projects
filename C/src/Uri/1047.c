#include <stdio.h>

int main()
{

    int HInicial, HFinal, MInicial, MFinal, hora, minuto;
    scanf("%d %d %d %d", &HInicial, &MInicial, &HFinal, &MFinal);
    hora = HFinal - HInicial;
    minuto = MFinal - MInicial;
    if(hora < 0 || (hora == 0 && minuto == 0)) hora += 24;
    if(minuto < 0)
    {
        minuto += 60;
        hora -= 1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    return 0;

}