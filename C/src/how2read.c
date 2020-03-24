#include <stdio.h>
#include <stdlib.h>

void func1(int a, int i, int j, int k, float x)
{
    printf(
        "
        int main()                                                    int main()\n
        {                                                             {\n
            int a, i, j, k = 0;                                           A = %d    I = %d     J = %d     K = %d\n
            float x;                                                      X = %.2f\n
                                                                          \n
            for(i = 0;i<10;i++)                                           for(i = 0;%d<10;i++)\n
            {                                                             {\n
                if(i %% 3 == 0)                                               if(%d %% 3 == 0)\n
                {                                                             {\n
                    for(j=1;j<=i;j++)                                              for(j=1;%d<=i;j++)\n
                    {                                                              {\n
                        a += 2;                                                         %d += 2;\n
                    }                                                              }\n
                }                                                             }\n
                else                                                          else\n
                {                                                             {\n
                    a = ++i;                                                       %d = ++%d;\n
                }                                                             }\n
                k += a;                                                       %d += %d;\n
                printf(\"x = %%.if\", x);                                     printf(\"x = %%.if\", %d);\n
            }                                                             }\n
            x = k / i;                                                    x = k / i;\n
            printf(\"x = %%.1f\", x);                                     printf(\"x = %%.1f\", x);\n
        }                                                              }\n
        ", a, i, j, k, x, i, i, j, a, a, i, k, a, x
    );
}

int main()
{
    int a, i, j, k;
    a = i = j = k = 0;
    float x;

    for(i = 0;i<10;i++)
    {
        system("cls");
        func1(a, i, j, k, x);
        if(i % 3 == 0)
        {
            for(j=1;j<=i;j++)
            {
                a += 2;
            }
        }
        else
        {
            a = ++i;
        }
        k += a;
        printf("\n\n\nx = %.if\n\n\n", x);
        system("pause");
    }

    printf("\n\n\n\n");
    printf("%f = %d / %d\n", x, k, i);
    x = k / i;
    printf("x = %.1f\n\n\n\n", x);
}



/*
printf(
"
int main()\n
{\n
    int a, i, j, k = 0;\n
    float x;\n
\n
    for(i = 0;i<10;i++)\n
    {\n
        if(i %% 3 == 0)\n
        {\n
            for(j=1;j<=i;j++)\n
            {\n
                a += 2;\n
            }\n
        }\n
        else\n
        {\n
            a = ++i;\n
        }\n
        k += a;\n
        printf(\"x = %%.if\", x);\n
    }
    x = k / i;
    printf(\"x = %%.1f\", x);\n
}\n
"
);
*/
