#include <stdio.h>

int main()
{
    int percentual;
    double salario, aumento;
    scanf("%lf", &salario);

    if(salario > 0)
    {
        if(salario <= 400.00)
        {
            percentual = 15;
        }
        else
        {
            if(salario <= 800.00)
            {
                percentual = 12;
            }
            else
            {
                if(salario <= 1200.00)
                {
                    percentual = 10;
                }
                else
                {
                    if(salario <= 2000.00)
                    {
                        percentual = 7;
                    }
                    else
                    {
                        percentual = 4;
                    }
                    
                }
            }
        }

        aumento = (salario/100) * percentual;
        salario += aumento;
        printf("Novo salario: %.2lf\n", salario);
        printf("Reajuste ganho: %.2lf\n", aumento);
        printf("Em percentual: %d %%\n", percentual);

    }
}

/*
0 - 400.00                  15%             Novo salario: 460.00
400.01 - 800.00             12%             Reajuste ganho: 60.00
800.01 - 1200.00            10%             Em percentual: 15 %
1200.01 - 2000.00           7%              
Acima de 2000.00            4%              
*/