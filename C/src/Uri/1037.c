#include <stdio.h>

int main()
{
    double N;

    scanf("%lf", &N);

    if(N>=0 && N<= 100)
    {
        if(N>25)
        {
            if(N>50)
            {
                if(N>75)
                {
                    printf("Intervalo (75,100]\n");
                }
                else
                {
                    printf("Intervalo (50,75]\n");
                }
            }
            else
            {
                printf("Intervalo (25,50]\n");
            }
        }
        else
        {
            printf("Intervalo [0,25]\n");
        }
    }
    else
    {
        printf("Fora de intervalo\n");
    }

}