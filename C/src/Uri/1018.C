#include <stdio.h>

int main()
{

    int entrada,entradasave, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    notas100 = notas50 = notas20 = notas10 = notas5 = notas2 = notas1 = 0;

    scanf("%d", &entrada);
    entradasave = entrada;

    notas100 = entrada/100;
    entrada -= 100 * notas100;

    notas50 = entrada/50;
    entrada -= 50 * notas50;

    notas20 = entrada/20;
    entrada -= 20 * notas20;

    notas10 = entrada/10;
    entrada -= 10 * notas10;

    notas5 = entrada/5;
    entrada -= 5 * notas5;

    notas2 = entrada/2;
    entrada -= 2 * notas2;

    notas1 = entrada/1;
    entrada -= 1 * notas1;

    printf("%d\n", entradasave);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);
}