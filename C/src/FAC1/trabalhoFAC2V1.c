/*  Observações:
a. Cada número N poderá aparecer no vetor, no máximo, N vezes. Logo, a cada operação realizada, deve-se ter o cuidado de que essa regra continua sendo respeitada;
b. Atenção especial deve ser dada à operação de alteração. Esta deve ser feita enquanto o limite N não for ultrapassado;
*/

#include <stdio.h>
#define cap 10

void insereNumero( int v[], int *quantidade, int numero );
void removeValor( int v[], int *quantidade, int numero );
void removeElemento( int v[], int *quantidade, int posicao );
void alteraOcorrencias( int v[], int *quantidade, int a, int b );
int retornaPosicao( int v[], int *quantidade , int numero );
void exibeElementos( int v[], int *quantidade );


void insereNumero( int v[], int *quantidade, int numero ) // 1) Inserção de um novo número;
{
    v[*quantidade] = numero;
    (*quantidade)++;
}

void removeValor( int v[], int *quantidade, int numero ) // 2) Remoção de todas as ocorrências de determinado valor;
{
    int i, j;

    for( i = 0 ; i < *quantidade ; ) {
        if(v[i] == numero) {
            (*quantidade)--;
            for( j = i ; j < *quantidade ; j++ ) {
                v[j] = v[j+1];

            }

        } else {
            i++;

        }

    }

}

void removeElemento( int v[], int *quantidade, int posicao ) // 3) Remoção do elemento que encontra-se em uma dada posição;
{
    int i;

    (*quantidade)--;
    for( i = posicao ; i < *quantidade ; i++) {
        v[i] = v[i+1];

    }

}

void alteraOcorrencias( int v[], int *quantidade, int a, int b ) // 4) Alteração de todas as ocorrências de um valor por outro; (troca A por B)
{
    int i;

    for( i = 0 ; i < *quantidade ; i++ ) {
        if(v[i] == a) {
            v[i] = b;
        }

    }

}

int retornaPosicao( int v[], int *quantidade , int numero ) // 5) Busca de determinado número, retornando posição de sua primeira ocorrência (caso exista no vetor);
{
    int i;

    for( i = 0 ; i < *quantidade ; i++ ) {
        if(v[i] == numero) {
            return i;
        }

    }

}

void exibeElementos( int v[], int *quantidade ) // 6) Exibição de todos os elementos do vetor.
{
    int i;

    printf("\n\n");
    for( i = 0 ; i < *quantidade ; i++ ) {
        printf("%d ", v[i]);
    }

}

void menu() {

    printf(" ____________________________________ ");
    printf("|                                    |");
    printf("|     Opções:                        |");
    printf("|                                    |");
    printf("|  1) Inserir número                 |");
    printf("|  2) Remover ocorrências de X       |");
    printf("|  3) Remover elemento de posicao X  |");
    printf("|  4) Alterar Ocorrencias de A por B |");
    printf("|  5) Busca primeira posicao de X    |");
    printf("|  6) Exibir elementos do vetor      |");
    printf("|____________________________________|");
    printf(" \\_ Escolha: ");


}

int main() {
    int vetor[cap], quant = 0, opcao;

    do{
        system("cls");
        menu();
        scanf(" %d", &opcao);

        switch(opcao){

            case 1:
            insereNumero( vetor, &quant, int numero );
            break;

            case 2:
            removeValor( vetor, &quant, int numero );
            break;

            case 3:
            removeElemento( vetor, &quant, int posicao );
            break;

            case 4:
            alteraOcorrencias( vetor, &quant, int a, int b );
            break;

            case 5:
            retornaPosicao( vetor, &quant , int numero );
            break;

            case 6:
            exibeElementos( vetor, &quant );
            break;

            //case 0 exit.
        }
    } while( opcao != 0 );

}