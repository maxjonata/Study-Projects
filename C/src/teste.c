#include <stdio.h>

int main()
{
    char valor, empty;

    for(int i = 0; i < 4; i++)
    {
        scanf("%c", &valor);
        printf("%d %c\n\n", valor, valor);
    }
}