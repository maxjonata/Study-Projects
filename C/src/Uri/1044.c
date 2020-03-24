Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.

Exemplo de Entrada	Exemplo de Saída
6 24                Sao Multiplos

6 25                Nao sao Multiplos

#include <stdio.h>

int main()
{
    int A,B,X;

    scanf("%d %d", &A, &B);
    if(A>B)
    {
        X = A;
        A = B;
        B = X;
    }

    X = B/A;

    if((B/(A * 1.0)) == X)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }

}


