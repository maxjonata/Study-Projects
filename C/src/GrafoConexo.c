#include <stdio.h>

int main()
{
	int grafo[5][5] = {{0, 0, 1, 1, 0},
					   {0, 0, 0, 0, 1},
				 	   {1, 0, 0, 0, 1},
				 	   {1, 0, 0, 0, 1},
					   {0, 1, 1, 1, 0}};
		
	if(buscaGrafo(grafo, 0) == 1)
		printf("Conexo");
	else
		printf("!Conexo");
}

int buscaGrafo(int grafo[5][5], int vert)
{
	int fila[5], marcado[5];
	int i, j, k, l, f=1, fi=0, m=0;
	fila[0]=0;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{

			if(grafo[i][j]==1)
			{

				for(k=fi; k<f; k++)
				{
					if(fila[k]==j)
					{
						k=10;
					}
				}
				for(l=0; l<m; l++)
				{
					if(marcado[l]==j)
					{
						l=10;
					}
				}
				if(k!=10 && l!=10)
				{
					fila[f]=j;
					f++;
				}

			}

		}
		
		marcado[m]=i;
		m++;
		fi++;
	}

	if(fi==4 && m==5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
