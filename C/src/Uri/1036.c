#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, R1, R2, delta;
    A = B = C = R1 = R2 = 0;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - (4 * A * C);

    if(delta < 1 || A < 1)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = ((B * -1) + sqrt(delta))/(2*A);
        R2 = ((B * -1) - sqrt(delta))/(2*A);

        printf("R1 = %0.5lf\n", R1);
        printf("R2 = %0.5lf\n", R2);
    }
}