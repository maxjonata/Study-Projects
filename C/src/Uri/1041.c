#include <stdio.h>

int main()
{
    double coordx,coordy;
    coordx=coordy=0;

    scanf("%lf %lf", &coordx, &coordy);

    if(coordx == 0 && coordy == 0)
    {
        printf("Origem\n");
    }
    else
    {
        if(coordx == 0)
        {
            printf("Eixo Y\n");
        }
        else
        {
            if(coordy == 0)
            {
                printf("Eixo X\n");
            }
            else
            {
                if(coordx > 0)
                {
                    if(coordy > 0)
                    {
                        printf("Q1\n");
                    }
                    else
                    {
                        printf("Q4\n");
                    }
                }
                else
                {
                    if(coordy > 0)
                    {
                        printf("Q2\n");
                    }
                    else
                    {
                        printf("Q3\n");
                    }
                }
            }
        }
    }
}