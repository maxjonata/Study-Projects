/*7

    1 - Criar uma matriz aleatória de minimapa 10x10, onde cada caractere será um objeto do mapa, tendo pelo menos 5 objetos diferenciáveis...
    Ex:

    O = mato
    T = arvore

        OOOTOOOOOO  
        OOOOOOOTOO   TTT
        OOOTOOOOOO  TTTTTT
        OTOOOTOOOO  TTTTTT
        OOOOOOOTOO  TTTTTT
        OOTOOTOOOO      TTT
        OOOOOTOOOO      TTT
        OOOTOOOTOO      TTT
        OTOOOOTOOO      TTT
        OOOTOOOOOO  OOOOOOOOO

    2 - Criar uma matriz de objeto, 5x5 para cada ícone, desenhando de forma mais detalhada.

    3 - Utilizar a matrix 10x10 como referência para desenhar um mapa na tela printando as matrizes 5x5 no lugar dos caracteres simples.

objetos:
T - arvore
0 - Grama
M - Mato alto
O - Agua
L - lobinhos



desenhos


arvore
{ ' ','O','O','O',' ' },
{ ' ','O','O','O',' ' }, 
{ ' ',' ','T',' ',' ' },
{ ' ',' ','T',' ',' ' }, 
{ 'w','w','w','w','w' }, 

grama
{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ','w',' ',' ' }, 
{ ' ','w','w',' ','w' },

Mato alto
{ ' ',' ','w','w',' ' }, 
{ ' ',' ','w','w',' ' }, 
{ ' ','w','w','w','w' }, 
{ ' ','w','w','w','w' }, 
{ 'w','w','w','w','w' },

agua
{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ',' ',' ',' ' }, 
{ '_','-','_','-','_' }, 
{ '-',_','-','_','-' },

carioca com arma de fogo
{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ',' ',' ','P' }, 
{ ' ','\','O','/',' ' }, 
{ ' ',' ','|',' ',' ' }, 
{ ' ',' ','/','\',' ' },*/
#include <stdio.h>

int main()
{
    int i, j;
    char mapa[10][10], objetos[5]={'T', 'G', 'M', 'A', 'L'}, variavel;

arvore 

{ ' ',' ',' ',' ',' ' }, 
{ ' ',' ',' ',' ','P' { ' ','O','O','O',' ' },
{ ' ','O','O','O',' ' }, 
{ ' ',' ','T',' ',' ' },
{ ' ',' ','T',' ',' ' }, 
{ 'w','w','w','w','w' },    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {   
            mapa[i][j]=objetos[rand()%5];
        }
    }
}