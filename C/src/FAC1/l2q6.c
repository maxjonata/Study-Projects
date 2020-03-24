/*
QUESTÃO 06: Escrever um algoritmo que, dados um número inteiro i e três valores a, b e c, apresente os 3 números na ordem definida por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no meio dos outros.
*/

#include <stdio.h>

int main()
{
    int i;
    float a,b,c;

    printf("digite o numero inteiro i: ");
    scanf(" %d", &i);
    printf("digite o valor a: ");
    scanf(" %f", &a);
    printf("digite o valor b: ");
    scanf(" %f", &b);
    printf("digite o valor c: ");
    scanf(" %f", &c);

    switch(i)
    {
        case 1:
            printf(" %f, %f, %f", (a<=b && a<=c)?a:(b<=a && b<=c)?b:c, ((a>=b && a<=c) || (a<=b && a>=c))?a:((b>=a && b<=c) || (b<=a && b>=c))?b:c, (a>=b && a>=c)?a:(b>=a && b>=c)?b:c);
        break;
        case 2:
            printf(" %f, %f, %f", (a>=b && a>=c)?a:(b>=a && b>=c)?b:c, ((a>=b && a<=c) || (a<=b && a>=c))?a:((b>=a && b<=c) || (b<=a && b>=c))?b:c, (a<=b && a<=c)?a:(b<=a && b<=c)?b:c);
        break;
        case 3:
            printf(" %f, %f, %f", ((a>=b && a<=c) || (a<=b && a>=c))?a:((b>=a && b<=c) || (b<=a && b>=c))?b:c, (a>=b && a>=c)?a:(b>=a && b>=c)?b:c, (a<=b && a<=c)?a:(b<=a && b<=c)?b:c);
        break;
    }
}