<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int A,B,C,maior;

    scanf(" %i", &A);
    scanf(" %i", &B);
    scanf(" %i", &C);

    if(A > B && A > C)
    {
        maior = A;
    }
    else
    {
        if(B > A && B > C)
        {
            maior = B;
        }
        else
        {
            maior = C;
        }
    }

    printf("%i eh o maior\n", maior);
=======
#include <stdio.h>

int main()
{
    int A,B,C,maior;

    scanf(" %i", &A);
    scanf(" %i", &B);
    scanf(" %i", &C);

    if(A > B && A > C)
    {
        maior = A;
    }
    else
    {
        if(B > A && B > C)
        {
            maior = B;
        }
        else
        {
            maior = C;
        }
    }

    printf("%i eh o maior\n", maior);
>>>>>>> b40020655e623470d8694fef4dab9e11f5ddbd76
}