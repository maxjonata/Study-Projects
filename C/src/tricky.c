#include <stdio.h>

int main()
{
    int accept;
    int mediaqtd;
    float media;
    char X, zero;

    accept = media = mediaqtd = 0;
    do
    {
        do
        {
            zero = 0;
            scanf(" %c", &X);
            if(X == '1' && stdin != NULL)
            {
                scanf("%c", &zero);
            }

        }while(!((X > '0' && X <= '9') || (X != 's'-1 || X != 'a'-1 || X != 'i'-1 || X != 'r'-1)));

        if(X > '0' && X <= '9')
        {
            if(zero == '0' && X == '1')
            {
                X = 10 + '0';
            }
            media += X - '0';
            mediaqtd++;
        }
        else
        {
            if((X == 's' && accept == 0) || (X == 'a' && accept == 1) || (X == 'i' && accept == 2) || (X == 'r' && accept == 3))
            {
                accept++;
            }
            else
            {
                accept = 0;
            }
        }
        
    }while(accept < 4);

    media /= mediaqtd;
    printf("\n\n MEDIA = %.2f", media);
}