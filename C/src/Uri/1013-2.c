<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,maior;

    scanf(" %i", &A);
    scanf(" %i", &B);
    scanf(" %i", &C);

    maior = (((A+B+abs(A-B))/2) + C + abs(((A+B+abs(A-B))/2) - C) / 2);

    printf("%i eh o maior\n", maior);
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,maior;

    scanf(" %i", &A);
    scanf(" %i", &B);
    scanf(" %i", &C);

    maior = (((A+B+abs(A-B))/2) + C + abs(((A+B+abs(A-B))/2) - C) / 2);

    printf("%i eh o maior\n", maior);
>>>>>>> b40020655e623470d8694fef4dab9e11f5ddbd76
}