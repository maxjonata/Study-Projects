#include <stdio.h>

int main()
{
	int v[10]={1, 2, 3, 4, 5, 6, 7, 8, 9}, i, meio, inicio=0, fim=9, num=1;
	
	for(i=0; inicio!=fim; i++)
	{
		meio=(inicio+fim)/2;
		
		if(v[meio]==num)
		{
			printf("%d", meio);
			return 0;
		}
		else if(v[meio]<num)
		{
			inicio=meio+1;
		}
		else if(v[meio]>num)
		{
			fim=fim-1;
		}
	}
	
	if(inicio==fim)
	{
		printf("nao existe.");
		return 0;
	}	
}