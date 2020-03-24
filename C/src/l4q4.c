/*
QUESTÃO 04:
Implementar um programa que exiba os N primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.
*/

#include <stdio.h>

int main()
{
	int N, i
	float a1, r, termo;

	printf("\nQuantidade de termos: ");
	scanf(" %d", &N);
	printf("\nNúmero do primeiro termo: ");
	scanf(" %f", &a1);
	printf("\nRazão: ");
	scanf(" %f", &r);

	termo = a1;
	for( i = 0;  i < N ; i++ )
	{
		printf(" %f", termo);
		termo += r;
	}
	prtinf("\n");
}