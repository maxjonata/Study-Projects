#include <stdio.h>

int main()
{
    int i;
    double A,B,C, x;
    double T[3];

    scanf("%lf %lf %lf", &A, &B, &C);
    T[0] = A;
    T[1] = B;
    T[2] = C;

    for(i = 0; i < 2; i++)
    {
        if( T[i] > T[i+1] )
        {
            x = T[i];
            T[i] = T[i+1];
            T[i+1] = x;
            i = -1;
        }
    }

    if((T[0] + T[1]) > T[2])
    {
        printf("Perimetro = %0.1lf\n", (A+B+C));
    }
    else
    {
        printf("Area = %0.1lf\n", (((A+B)/2)*C));
    }
}