<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    double salarioFixo, vendasEfetuadas;

    fflush(stdin);
    gets(nome);
    scanf(" %lf", &salarioFixo);
    scanf(" %lf", &vendasEfetuadas);

    printf("TOTAL = R$ %.2f\n", salarioFixo + (vendasEfetuadas * 0.15));
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    double salarioFixo, vendasEfetuadas;

    fflush(stdin);
    gets(nome);
    scanf(" %lf", &salarioFixo);
    scanf(" %lf", &vendasEfetuadas);

    printf("TOTAL = R$ %.2f\n", salarioFixo + (vendasEfetuadas * 0.15));
>>>>>>> b40020655e623470d8694fef4dab9e11f5ddbd76
}