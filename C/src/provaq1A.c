#include <stdio.h>

int funcao(int n, int L[n], int x)
{
    int comeco = 0, fim = (--n), i, j, comecoTest, fimTest;
    float metade;
    int metadeTest;
    do
    {
        j = 1;
        metade = fim - ((fim - comeco) / 2.0);
        comecoTest = comeco;
        fimTest = fim;
        if(metade != (int)metade)
        {
            metade = (int)metade;
            j = 2;
        }
        metadeTest = metade;

        for( i = 0 ; i < j ; i++)
        {
            if( L[metadeTest+i] == x )
            {
                return metadeTest+i;
            }
            else
            {
                if(L[metadeTest+i] > x)
                {
                    fimTest = metadeTest+i;
                }
                else
                {
                    comecoTest = metadeTest+i;
                }
            }
        }
        comeco = comecoTest;
        fim = fimTest;
    }while(fim > 0);
    return -1;
}

int main()
{
    int vetor[] = {1,2,3,4,5,6,7,8,9};
    printf("%d", funcao(10, vetor, 1));
}