#include <stdio.h>

int main()
{

    int TInicial, TFinal, tempo;
    scanf("%d %d", &TInicial, &TFinal);
    tempo = TFinal - TInicial;
    if(tempo <= 0)
    {
        tempo += 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

}