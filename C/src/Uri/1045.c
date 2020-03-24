#include <stdio.h>
#include <math.h>


void order(double v[])
{
    int i, quant = sizeof(v) - 1;
    double x;

    for( i = 0 ; i < quant ; i++)
    {
        if(v[i] < v[i+1])
        {
            x = v[i];
            v[i] = v[i+1];
            v[i+1] = x;

            i=-1;
        }
    }
}

int main()
{
    double t[3];

    scanf("%lf %lf %lf", &t[0], &t[1], &t[2]);
    order(t);
    if(t[0] >= t[1] + t[2])
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(pow(t[0], 2) == pow(t[1], 2) + pow(t[2], 2))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else
        {
            if(pow(t[0], 2) > pow(t[1], 2) + pow(t[2], 2))
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if(pow(t[0], 2) < pow(t[1], 2) + pow(t[2], 2))
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
            if(t[0] == t[1] && t[1] == t[2])
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            if((t[0] == t[1] && t[1] != t[2]) || (t[1] == t[2] && t[1] != t[0]) || (t[0] == t[2] && t[1] != t[0]))
            {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }
}