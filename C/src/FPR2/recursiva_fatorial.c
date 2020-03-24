#include <stdio.h>

int fatorial(int n) 
{
    	return (n > 0)? n * fatorial(n-1) : 1 ;
}

int main()
{
	int numero;

	scanf(" %d", &numero);
	printf("%d! = %d", numero, fatorial(numero));
}