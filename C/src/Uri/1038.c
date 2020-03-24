#include <stdio.h>

int main()
{
    int codigo, quantidade;
    double total;
    codigo = quantidade = 0;

    scanf("%d %d", &codigo, &quantidade);

    switch(codigo)
    {
        case 1:
            total = quantidade * 4.0;
            break;
        case 2:
            total = quantidade * 4.5;
            break;
        case 3:
            total = quantidade * 5.0;
            break;
        case 4:
            total = quantidade * 2.0;
            break;
        case 5:
            total = quantidade * 1.5;
            break;
    }

    printf("Total: R$ %0.2lf\n", total);
}